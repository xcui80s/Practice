#pragma once
#include "IProblem.h"
#include <vector>

/*
Single Number
https://oj.leetcode.com/problems/single-number/
*/
class SingleNumber :
	public IProblem
{
public:
	SingleNumber();
	~SingleNumber();

	void Execute()
	{
		int A[] = { 1 };
		int result = GetSingleNumber(A, 1);

		int A2[] = { 1, 2, 1, 3, 2 };
		result = GetSingleNumber(A2, 5);

		std::vector<char> output;
		GetPath(0, 2, 0, 3, output);

		std::vector<char> output2;
		GetParentheses(0, 3, 0, 3, output2);
	}

	// Algorithm
	int GetSingleNumber(int A[], int n)
	{
		int result = A[0];
		for (int i = 1; i<n; i++)
		{
			result = result^A[i];  /* Get the xor of all elements */
		}
		return result;
	}

	void GetPath(int x, int maxX, int y, int maxY, std::vector<char>& output)
	{
		if (x == maxX && y == maxY)
		{
			std::vector<char>::iterator i;
			for (i = output.begin(); i != output.end(); i++)
			{
				printf("%c ", *i);
			}
			printf("\n");
		}

		if (x < maxX)
		{
			output.push_back('0');
			GetPath(x+1, maxX, y, maxY, output);
			output.pop_back();
		}

		if (y < maxY)
		{
			output.push_back('1');
			GetPath(x, maxX, y+1, maxY, output);
			output.pop_back();
		}

	}

	void GetParentheses(int x, int maxX, int y, int maxY, std::vector<char>& output)
	{
		if (x == maxX && y == maxY)
		{
			std::vector<char>::iterator i;
			for (i = output.begin(); i != output.end(); i++)
			{
				printf("%c ", *i);
			}
			printf("\n");
		}

		if (x < maxX)
		{
			output.push_back('(');
			GetParentheses(x + 1, maxX, y, maxY, output);
			output.pop_back();
		}

		if (y < maxY && y < x)
		{
			output.push_back(')');
			GetParentheses(x, maxX, y + 1, maxY, output);
			output.pop_back();
		}

	}
};

