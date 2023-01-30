//recursive.cpp
//Demonstrating the principle of recursion by a 
//function, which read a line from the keyboard
// and outputs it in reverse order.
//------------------------------------------------------
#include <iostream>
using namespace std;

void getput(void);

int main()
{
	std::cout << "Please enter a line of text: \n";
	getput();
std:cout << "\nBye bye! " << std::endl;
	return 0;
}

void getput()
{
	char c;
	if (cin.get(c) && c != '\n')
		getput();
	std::cout.put(c);
}