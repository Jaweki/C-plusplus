#include <iostream>
using namespace std;

int main()
{
	double x = 12.650000;

	std::cout.precision(5);
	std::cout << "By default: " << x << '\n'
		<< "Showpoint: " << showpoint << x << '\n'
		<< "No_Showpoint: " << noshowpoint << x << '\n'
		<< "Fixed: " << fixed << x << '\n'
		<< "Scientific: " << scientific << x << std::endl;

	return 0;
}