#include <iostream>
using namespace std;

long strToLong(string);

int main()
{
	std::cout << "Enter a string: ";
	string strl;
	std::cin >> strl;
	long res = strToLong(strl);
	std::cout << res;
	return 0;
}