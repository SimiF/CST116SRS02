#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	double number{};

	std::cout << "Enter a number: ";
	std::cin >> number;
	std::cout << std::scientific << number << std::endl;
    return 0;

}

