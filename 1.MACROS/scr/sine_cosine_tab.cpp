//sine-cosinetab.cpp
//Creates a sine function table

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI      3.1415926536
#define START   0.0            //Lower limit
#define END     (2.0*PI)       //Upper limit
#define STEP    (PI/8.0)       //Step width
#define HEADER  (std::cout<<\
"***** SINE FUNCTION TABLE *****\n\n")

int main()
{
	HEADER;

	std::cout << setw(16) << "x" << setw(20) << "sin(x)"
		<< setw(20) << "cos(x)\n"
		<< "--------------------------------------------"
		<< "-------------------"
		<< fixed << std::endl;

	double x;
	for (x = START; x < END + STEP / 2; x += STEP)
		std::cout << setw(16) << x << setw(20) << sin(x)
		<<setw(20)<<cos(x)
		<< std::endl;

	std::cout << std::endl << std::endl;
	return 0;
}