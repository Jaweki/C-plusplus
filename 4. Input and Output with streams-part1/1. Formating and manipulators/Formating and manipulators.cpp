#include <iostream>
using namespace std;

int main()
{
	//Here the manipulator showpos is called
	std::cout << showpos << 123 << std::endl; //Outputs: +123
	
	//The above statement is equivalent to

	std::cout.setf(ios::showpos);
	std::cout << 123 << std::endl;

	//The other positive numbers are printed with their sign as well.
	//e.g.,
	std::cout << 22 << std::endl;

	//...
	//The output of a positive sign can be cancelled by the manipulator
	//noshowpos:

	std::cout << noshowpos << 123 << std::endl;  //Outputs:123

	//The previous statement is equivalent to

	std::cout.unsetf(ios::showpos);
	std::cout << 123 << std::endl;

	return 0;

}