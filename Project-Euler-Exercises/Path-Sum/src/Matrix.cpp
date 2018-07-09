#include "Matrix.h"
#include <iostream>
#include <fstream>
#include <sstream>

Matrix::Matrix()
{
	std::ifstream file("matrix.txt");
	auto s = file.getline;
	std::cout << s << std::endl;
}

int main()
{
	Matrix matrix;
	std::cin.get();
}