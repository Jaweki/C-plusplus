//Demonstration of compound assignments.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float x, y;
	std::cout << "\nPlease enter a starting value: ";
	std::cin >> x;

	std::cout << "\nPlease enter the incremental value: ";
	std::cin >> y;

	x += y;

	std::cout << "\nAnd now multiplication! ";
	std::cout << "\nPlease enter a factor: ";
	std::cin >> y;

	x *= y;

	std::cout<<"\nFinally division. ";
	std::cout << "\nPlease supply a divisor: ";
	std::cin >> y;

	x /= y;

	std::cout << "\nAnd this is "
		<< "your current lucky number: "
		//without digits after
		//the decimal point:
		<< fixed << setprecision(2)
		<< x << std::endl;

	return 0;
}