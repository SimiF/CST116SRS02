#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	double west_revenue{ 36364.87 };
	double midwest_revenue{ 12431.33 };
	double east_revenue{ 127690.50 };
	double south_revenue{ 9200.00 };

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);
	std::cout.imbue(std::locale("en-US"));

	std::cout << std::setw(8) << "West:" << std::setw(3) << "$ " << std::setw(9) << west_revenue << '\n';

	std::cout << std::setw(8) << "Midwest:" << std::setw(3) << "$ " << std::setw(9) << midwest_revenue << '\n';

	std::cout << std::setw(8) << "East:" << std::setw(2) << "$" << std::setw(9) << east_revenue << '\n';

	std::cout << std::setw(8) << "South:" << std::setw(3) << "$ " << std::setw(9) << south_revenue << std::endl;

	return 0;

}

