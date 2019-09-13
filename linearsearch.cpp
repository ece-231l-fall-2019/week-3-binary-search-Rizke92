#include <vector>
#include <iostream>

bool linearSearch(const std::vector<int>& set, int value)
{
	for(size_t w = 0; w < set.size(); w++)
	{
		if(set[w] == value)
		{
			return true;
		}
	}
	return false;
}

bool linearSearch(const int *begin, const int *end, int value)
{
	while(*begin != *end)
	{
		if(*begin == value)
		{
			return true;
		}
		begin++;
	}
	return false;
}
