#include <iostream>
#include <string>
#include <ctime>
#include "MyLib.h"

bool CheckPalindromic(std::string s)
{
	std::string substr1 = s.substr(0, 3);
	std::string substr2 = s.substr(3, 3);
	std::reverse(substr2.begin(), substr2.end());
	return substr1 == substr2;
}

int FindPalindromic()
{
	int result = 0, product;
	for (std::size_t i = 999; i > 0; i--)
	{
		for (std::size_t j = 999; j > 0; j--)
		{
			product = i * j;
			result = (CheckPalindromic(std::to_string(product)) && product > result) ? product : result;
			if (result != 0)
				return result;
		}
	}
	return 1;
}


int main()
{
	clock_t begin = clock();
	for (std::size_t i = 0; i < 1000; i++)
		FindPalindromic();
	clock_t end = clock();
	myLib::WriteToFile(std::to_string(double(end - begin) / CLOCKS_PER_SEC), "time results");
	std::cout << "Execution time (sec): " << double(end - begin) / CLOCKS_PER_SEC << std::endl << "Result saved to filed" << std::endl;
	std::cin.get();
}