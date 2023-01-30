//cutline1.cpp
//Afilter to remove white-space charaters
//at the ends of lines.
//----------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

void cutline(void);                   //Prototype
string line;                          //Global string

int main()
{
	while (getline(cin, line))            //As long as a line
	{                                     //can be read 
		cutline();                        //shorten the line.
		std::cout << line << std::endl;   //Output the line.
	}
	return 0;
}

