//Circumference and area of a circle with radius 2.5

#include <iostream>
using namespace std;

const double pi = 3.141593;
int main()
{
	double area, circuit, radius = 1.5;

	area = pi * radius * radius;
	circuit = 2 * pi * radius;

	std::cout << "\nToEvaluate a circle\n" << std::endl;

	std::cout << "Radius:            " << radius
		<< "\nCircumference:     " << circuit
		<< "\nArea:              " << area << std::endl;

	return 0;
}