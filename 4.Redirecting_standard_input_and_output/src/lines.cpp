//lines.cpp
//Afilter that numbers lines.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string line;
	int number = 0;

	while (getline(cin, line))    //Aslong as aline
	{                             //can be read.
		std::cout << setw(5) << ++number << ": "
			<< line << std::endl;
	}

	return 0;
}