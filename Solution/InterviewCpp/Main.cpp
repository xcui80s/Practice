#include "ReverseInt.h"
#include "MaxProfit.h"
#include "MergeLinkedLists.h"
#include "BuildBSTFromSortedArray.h"

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
}