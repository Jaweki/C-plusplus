//To display hexadecimal integer literals and
//decimal integer literals
#include <iostream>
using namespace std;

int main()
{
	//cout outputs integers as decimal integers:
	std::cout << "Value of 0xFF= " << 0xFF << "  decimal"
		<< std::endl;                //Output:255 decimal
	//The manipulator "hex" changes output to hexadecimal
	//format ("dec" changes to decimal format):
	std::cout << "Value of 27= " << hex << 27 << "   hexadecimal"
		<< std::endl;             //Output:16 hexadecimal

	return 0;
}