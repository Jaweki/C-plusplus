//Definition and use of variables
#include <iostream>
using namespace std;

int gVar1;                 //Global variables;
int gVar2 = 2;             //explicit initialization.

int main()
{
	char ch('A'); //Local variable being initiated
	              //or: char ch = 'A';

	std::cout << "Value of gVar1: " << gVar1 << std::endl;
	std::cout << "Value of gVar2: " << gVar2 << std::endl;
	std::cout << "Character in ch: " << ch << std::endl;

	int sum, number = 3; //Local variables with
	                     //and without initialization

	sum = number + 5;
	std::cout << "Value of sum: " << sum << std::endl;

	return 0;
}