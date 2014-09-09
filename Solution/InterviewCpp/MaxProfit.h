#pragma once

#include "IProblem.h"
#include <vector>
/*
Best Time to Buy and Sell Stock II
https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
*/
class MaxProfit :
	public IProblem
{
public:
	MaxProfit();
	~MaxProfit();

	void Execute()
	{
		std::vector<int> input;
		input.push_back(2);
		input.push_back(1);
		input.push_back(4);
		int ret = maxProfit(input);
	}

	int maxProfit(std::vector<int> &prices) 
	{
		int total = 0;
		for (int i = 0; i < (int)prices.size() - 1; i++)
		{
			if (prices[i + 1] > prices[i])
			{
				total += prices[i + 1] - prices[i];
			}
		}

		return total;
	}
};

