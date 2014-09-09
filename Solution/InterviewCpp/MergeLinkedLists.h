#pragma once
#include "IProblem.h"
#include "DataTypes.h"

/*
Merge Two Sorted Lists
https://oj.leetcode.com/problems/merge-two-sorted-lists/
*/

class MergeLinkedLists :
	public IProblem
{
public:
	MergeLinkedLists();
	~MergeLinkedLists();

	void Execute()
	{
		ListNode* l1 = new ListNode(2);
		ListNode* l2 = new ListNode(1);
		ListNode* merged = mergeTwoLists2(l1, l2);
	}

	ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) 
	{
		if (l1 == NULL)
		{
			return l2;
		}

		if (l2 == NULL)
		{
			return l1;
		}

		ListNode* l2head = l2;
		ListNode* l1cur = l1;
		while (l2head)
		{
			ListNode* l1pre = NULL;
			while (l1cur && l2head->val >= l1cur->val)
			{
				l1pre = l1cur;
				l1cur = l1cur->next;
			}

			if (l1cur)
			{
				if (l1pre != NULL)
				{
					l1pre->next = l2head;

					l2head = l2head->next;

					l1pre->next->next = l1cur;
				}
				else
				{

				}

			}
			else
			{
				l1pre->next = l2head;
				break;
			}
		}

		return l1;
	}

	ListNode *mergeTwoLists2(ListNode *l1, ListNode *l2) 
	{
		if (l1 == NULL)
		{
			return l2;
		}

		if (l2 == NULL)
		{
			return l1;
		}

		ListNode* l1cur = l1;
		ListNode* l2cur = l2;

		ListNode* mergedHead = NULL;
		if (l1cur->val <= l2cur->val)
		{
			mergedHead = l1cur;
			l1cur = l1cur->next;
		}
		else
		{
			mergedHead = l2cur;
			l2cur = l2cur->next;
		}

		ListNode* mergedCur = mergedHead;

		while (l1cur && l2cur)
		{
			if (l1cur->val <= l2cur->val)
			{
				mergedCur->next = l1cur;
				l1cur = l1cur->next;
			}
			else
			{
				mergedCur->next = l2cur;
				l2cur = l2cur->next;
			}
			mergedCur = mergedCur->next;
		}

		if (l1cur)
		{
			mergedCur->next = l1cur;
		}

		if (l2cur)
		{
			mergedCur->next = l2cur;
		}

		return mergedHead;
	}
};

