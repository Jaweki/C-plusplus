#include <iostream>
using namespace std;

int main()
{
	int i(2), j(8);

	std::cout << "\nWhen (std::endl;) is used after every arithmetic output, result is:\n";
	std::cout << i++ << std::endl;              //Outputs 2
	std::cout << ++i << std::endl;              //Outputs 3
	std::cout << j-- << std::endl;              //Outputs 8
	std::cout << --j << std::endl;              //Outputs 6
	
	int k(2), l(8);
	std::cout << "\nWhen ('\\n') is used instead of (std::endl;)  after every arithmetic output, result is:\n";
	std::cout << k++ << '\n'                    //Outputs 3
		<< ++k << '\n'                          //Outputs 4
		<< l-- << '\n'                          //Outputs 7
		<< --l << '\n';                         //Outputs 6

	return 0;
}