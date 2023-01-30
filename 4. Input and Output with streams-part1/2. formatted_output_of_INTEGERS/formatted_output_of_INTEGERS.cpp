//Reads integral decimal values and
//generates octal, decimal, and hexadecimal output.

#include <iostream>
using namespace std;

int main()
{
	int number;
	std::cout << "Please enter an integer: ";
	std::cin >> number;
	std::cout << uppercase        //for hex-digits
		<< "Octal  \t  decimal  \t  hexadecimal\n"
		<< oct << number << "        \t"
		<< dec << number << "        \t"
		<< hex << number << std::endl;

	return 0;
}