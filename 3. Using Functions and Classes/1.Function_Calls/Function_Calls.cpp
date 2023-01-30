//Calculating power with the standard function pow()

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x = 2.5, y;

	//By means of a prototype, the compiler generates
	// the correct call or an error message!

	//computes x raised to the power 3:
    //	y = pow("x", 3.0);  Error! String is not a number
	//  y = pow(x + 3.0);   Error! Just one argument
	y = pow(x, 3.0);       //Ok!
	y = pow(x, 3);         //Ok! The compiler converts the
	                       //int value 3 to double

	std::cout << "2.5 raised to 3 yields:                   "
		<< y << std::endl;

	//Calculating with pow() is possible:
	std::cout << "2 + (5 raised to the power 2.5) yields:   "
		<< 2.0 + pow(5.0, x) << std::endl;
	return 0;

}