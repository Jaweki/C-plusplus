//func1.cpp
#include <iostream>
using namespace std;

void test(int, double);                 //prototype

int main()
{
	std::cout << "\nNow function test() will be called.\n";
	test(10, -7.5);
	std::cout << "\nAnd back again in main(). " << std::endl;

	return 0;
}
void test(int arg1, double arg2)      //Definition
{
	std::cout << "\nIn function test(). "
		<< "\n 1. argument: " << arg1
		<< "\n 2. argument: " << arg2 << std::endl;
}