//area.cpp
//Example for a simple function returning a value.
//-------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;

double area(double, double);              //Prototype

int main()
{
	double x = 3.5, y = 7.2, res;
	res = area(x, y + 1);                 //call

	//To output to two decimal places:
	std::cout << fixed << setprecision(2);
	std::cout << "\nThe area of a rectangle "
		<< "\n with width        " << setw(5) << x
		<< "\n and length        " << setw(5) << y + 1
		<< "\n is                " << setw(5) << res
		<< std::endl;
	return 0;
}

//Defining the function area()
//Computes the area of a rectangle.
double area(double width, double len)
{
	return(width * len);                 //Return the result.
}