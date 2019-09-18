#include <iostream>
#include <fstream>
#include <vector>

#include "Timer.h"
#include "search.h"
#include "sort.h"

void upLink(std::string file, std::vector<int>& x)
{
	std::ifstream load(file);
	while(true)
	{
		int w;
		load >> w;
		if(load.eof())
			break;
		x.push_back(w);
	}
	load.close();
}

int main()
{
	std::vector<int> numbers;
	std::vector<int> search;

	numbers.reserve(2000000);
	search.reserve(4000);
	
	upLink("numbers", numbers);
	upLink("search", search);

// -------------------- Linear Search --------------------------------------------------------

	{
		Timer timer("Time to linear search all values: ");
		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers, search[i]))
				found++;
		}
		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}
	{
		Timer timer("Time to linear search all values (pointers): ");
		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers.data(), numbers.data() + numbers.size(),
					search[i]))
				found++;
		}
		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

//---------------------- Binary Search --------------------------------------------------------
	{
		Timer timer("Time to binary search all values: ");
		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearch(numbers, search[i]))
				found++;
		}
		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}
	{
		Timer timer("Time to binary search all values (pointers): ");
		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearch(numbers.data(), numbers.data() + numbers.size(), search[i]))
				found++;
		}
		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}
	{
	        Timer timer("Time to binary search all values (Recursive): ");
        	int found = 0;
		for (size_t i = 0; i < search.size(); i++)
       	 	{
			if (binarySearchRecursive(numbers.data(), numbers.data() + numbers.size(), search[i]))
				found++;
        	}
        	std::cout << "Found "<< found << "/"
            		<< search.size() << " values." << std::endl;
    	}
//------------------- Bubble Sort --------------------------------------------------------------------
	{
		Timer timer("Time to Bubble Sort ");
		bubbleSort(search.data(), search.data() + search.size());
		std::vector<int>::iterator itr;
		std::cout << "Bubble Sort Search Values \n";
		for(itr = search.begin(); itr < search.end(); itr++)
		{
			std::cout << *itr << " "; //prints values
		}
		std::cout << "\n";
	}
	return 0;
}
// end of program
