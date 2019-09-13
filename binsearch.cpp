#include <vector>
#include "search.h"
#include <iostream>

bool binarySearch(const std::vector<int>& set, int value)
{
	size_t left = 0;
	size_t right = set.size() - 1;

	while(true)
	{
		size_t middle = (left + right) / 2;

		if(set[middle] == value)
		{
			return true;
		}
		if(set[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
		if( left > right)
		{
			return false;
		}
	}
	return false;
}

bool binarySearch(const int *begin, const int *end, int value)
{
	//const int *middle = begin + (end - begin) / 2;

	while(true)
	{
		const int *middle = begin + (end - begin) / 2;
	//	if((*begin == value) || (*end == value))
	//	{
	//		return true;
	//	}
		if(begin > end)
		{
			return false;
		}
		if(*middle == value)
		{
			return true;
		}
		if(*middle < value)
		{
			begin = middle + 1;
		}
		else
		{
			end = middle - 1;
		}
	}
	return false;
}

