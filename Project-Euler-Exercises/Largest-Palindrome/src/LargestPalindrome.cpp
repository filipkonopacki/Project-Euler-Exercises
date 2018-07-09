#include <iostream>
#include <string>
#include <ctime>
#include "MyLib.h"

bool CheckPalindrome(int number)
{
	return ((number / 100000 == number % 10) && ((number / 10000 % 10) == (number % 100 / 10)) && (number / 1000 %10) == (number %1000 / 100));
}

int FindPalindrome()
{
	int product;
	for (std::size_t i = 999; i > 100; i--)
	{
		for (std::size_t j = 999; j > 100; j--)
		{
			product = i * j;
			if (product > 999999 || product < 900000)
				break;
			if (CheckPalindrome(product))
				return product;
		}
	}
	return 0;
}


void LargestPalindrome()
{
	clock_t begin = clock();
	for (std::size_t i = 0; i < 1000; i++)
		FindPalindrome();
	clock_t end = clock();
	myLib::WriteToFile(std::to_string(double(end - begin) / CLOCKS_PER_SEC), "time results");
	std::cout << "Execution time (sec): " << double(end - begin) / CLOCKS_PER_SEC << std::endl << "Result saved to file" << std::endl;
	std::cin.get();
}
