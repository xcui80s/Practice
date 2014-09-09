#include "ReverseInt.h"
#include "MaxProfit.h"
#include "MergeLinkedLists.h"
#include "BuildBSTFromSortedArray.h"
#include "SingleNumber.h"

void main()
{
	IProblem* reverseInt = new ReverseInt();
	reverseInt->Execute();

	IProblem* maxProfit = new MaxProfit();
	maxProfit->Execute();

	IProblem* mergeLinkedLists = new MergeLinkedLists();
	mergeLinkedLists->Execute();

	IProblem* buildBSTFromSortedArray = new BuildBSTFromSortedArray();
	buildBSTFromSortedArray->Execute();

	IProblem* singleNumber = new SingleNumber();
	singleNumber->Execute();
}