//Enter hexadecimal digits and a floating-point number
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int number = 0;
	std::cout << "\nEnter a hexadecimal number: ";
	std::cin >> hex >> number;          //Inputs hex-number
	std::cout << "\nYour Hexadecimal input as a decimal: " << number << std::endl;

	//If an invalid input occured:
	std::cin.sync();          //Clears the buffer      
	std::cin.clear();         //Reset error flags
	double x1 = 0.0, x2 = 0.0;

	std::cout << "\nNow enter two floating-point values: " << std::endl;
	std::cout << "1. Number: ";
	std::cin >> x1;               //Read first number 
	std::cout << "2. Number: ";
	std::cin >> x2;               //Read second number

	std::cout << fixed << setprecision(2)
		<< "\nThe sum of both numbers: "
		<< setw(10) << x1 + x2 << std::endl;
	std::cout << "\nThe product of both numbers: "
		<< setw(10) << x1 * x2 << std::endl;

	return 0;
}