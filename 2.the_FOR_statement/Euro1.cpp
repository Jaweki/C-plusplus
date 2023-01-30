//Euro1.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double rate = 1.15;      //Exchange rate:
	                         //one Euro to one Dollar
	std::cout << fixed << setprecision(2);

	std::cout << "\t(€) Euro\t($) Dollar \n";
	std::cout << "\t-------- \t---------- \n";

	for (int euro = 1; euro <= 5; ++euro)
		std::cout << "\t" << euro
		<< "\t\t" << euro * rate << std::endl;

	return 0;
}