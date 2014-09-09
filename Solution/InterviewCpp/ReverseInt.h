#pragma once

#include "IProblem.h"
/*
Reverse Integer
https://oj.leetcode.com/problems/reverse-integer/
*/
class ReverseInt :
	public IProblem
{
public:
	ReverseInt();
	~ReverseInt();

	void Execute()
	{
		int result = 0;
		result = reverse(-99);
		result = reverse(123);
		result = reverse(-405);
	}

	// Algorithm
	int reverse(int x) 
	{
		long long out = 0;
		
		while (x)
		{
			out = out * 10 + x % 10;
			x = x / 10;
		}

		if (x < 0)
			return (int)-out;
		else
			return (int)out;
	}
};


