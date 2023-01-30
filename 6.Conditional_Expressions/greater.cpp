//greater.cpp
#include <iostream>
using namespace std;

int main()
{
	float x, y;

	std::cout << "Type two different numbers:\n";
	if (!(std::cin >> x && std::cin >> y))
	{
		std::cout << "\nInvalid input!" << std::endl;
	}
	else
	{
		std::cout << "\nThe greater value is: "
			<< (x > y ? x : y) << std::endl;
		std::cout << "\nThe lesser value is: "
			<< (x < y ? x : y) << std::endl;
	}

	return 0;
}