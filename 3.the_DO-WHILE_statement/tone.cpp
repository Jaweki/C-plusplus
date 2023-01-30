//tone.cpp
#include <iostream>
using namespace std;

const long delay = 100000000L;

int main()
{
	int tic;
	std::cout << "\nHow often should the tone be output? ";
	std::cin >> tic;

	do
	{
		for (long i = 0; i < delay; ++i)
			;
		std::cout << "Now the tone!\a" << std::endl;
	} while (--tic > 0);

	std::cout << "End of the accoustic interlude!\n";

	return 0;
}