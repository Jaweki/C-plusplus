#include <iostream>
using namespace std;

int main()
{
	double x, y;
	std::cout << "\nEnter two floatong-point values (use Space key to sepatare the values): ";
	std::cin >> x >> y;
	std::cout << "The average of the two numbers is: "
		<< (x + y) / 2.0 << endl;
	return 0;
}