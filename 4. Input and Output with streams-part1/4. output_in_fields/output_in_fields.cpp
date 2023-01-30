#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	std::cout << '|' << setw(6) << 'X' << '|'<<'\n';
	std::cout << fixed << setprecision(3)
		<< setw(10) << 123.44 << '\n'
		<< "1234567890899799" << std::endl;

	std::cout << "\n\n";
	std::cout << "To visualize the effect of setw() method, consider output below:" << std::endl;
	std::cout << '|' << setw(6) << 'X' << '|';
	std::cout << fixed << setprecision(3)
		<< setw(10) << 123.44 << '\n'
		<< "1234567890899799" << std::endl;
	std::cout << "\n\n";

	return 0;
}