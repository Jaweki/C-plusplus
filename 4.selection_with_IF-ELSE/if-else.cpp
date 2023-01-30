//if-else.cpp
//Demonstrates the use of if-else statements

#include <iostream>
using namespace std;

int main()
{
	float x, y, min;

	std::cout << "Enter two different numbers:\n";
		
	if (!(std::cin >> x))
	{
		std::cout << "\nInvalid Input for the FIRST number!" << std::endl;
	}
	else if (!(std::cin >> y))
	{
		std::cout << "\nInvalid Input for the SECOND number!" << std::endl;
	}

	if (std::cin >> x >> y)   //If both inputs are
	{                         //valid, compute
		                      //the lesser.
		if (x < y)
			min = x;
		else
			min = y;
		std::cout << "\nThe smallest number is: " << min << std::endl;
	}

	return 0;
}