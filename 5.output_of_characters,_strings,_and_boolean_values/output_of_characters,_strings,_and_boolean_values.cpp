//Enter a character and outputs its
//octal, decimal, and hexadecimal code.

#include <iostream>          //Declaration of cin, cout
#include <iomanip>           //For manipulators being called with arguments.
#include <string>            //For using the class string, in type declaration/ definition
using namespace std;

int main()
{
	int number = ' ';
	std::cout << "The white-space code is as follows: "
		<< number << std::endl;

	char ch;
	string prompt = "\nPlease enter a character followed by"
		"<return>: ";
	std::cout << prompt;

	cin >> ch;                               //Reads a character
	number = ch;
	std::cout << "The character " << ch
		<< " has the ASCII code: " << number << std::endl;
	std::cout << std::endl;
	
	std::cout << uppercase
		<< '|' << "Octal" << '|'
		<< setw(4) << '|' << "Decimal" << '|'
		<< setw(4) << '|' << "Hexadecimal" << '|'<<'\n'
		<< oct << setw(6) << number
		<< dec << setw(8) << number
		<< hex << setw(14) << number << std::endl;

	return 0;
}