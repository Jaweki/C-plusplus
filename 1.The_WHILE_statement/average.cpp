//average.cpp
//Computing the average of number

#include <iostream>
using namespace std;

int main()
{
	int x, count = 0;
	float sum = 0.0;

	std::cout << "Please enter some integers: \n"
		"(Break with any letter)"
		<< std::endl;
	while (std::cin >> x)
	{
		sum += x;
		++count;
	}

	std::cout << "The average of the numbers: "
		<< sum / count << std::endl;

	return 0;
}