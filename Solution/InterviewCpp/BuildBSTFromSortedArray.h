#pragma once
#include "IProblem.h"
#include "DataTypes.h"
#include <vector>
class BuildBSTFromSortedArray :
	public IProblem
{
public:
	BuildBSTFromSortedArray();
	~BuildBSTFromSortedArray();

	void Execute()
	{
		std::vector<int> num;
		num.push_back(1);
		num.push_back(3);

		TreeNode *tree = SortedArrayToBST(num);
	}

	TreeNode *SortedArrayToBST(std::vector<int> &num) {
		return BuildTree(num, 0, (int)num.size() - 1);
	}

	TreeNode *BuildTree(std::vector<int> &num, int start, int end)
	{
		if (start > end)
		{
			return NULL;
		}

		int mid = start + (end - start) / 2;
		TreeNode *node = new TreeNode(num[mid]);
		node->left = BuildTree(num, start, mid - 1);
		node->right = BuildTree(num, mid + 1, end);

		return node;
	}
};

