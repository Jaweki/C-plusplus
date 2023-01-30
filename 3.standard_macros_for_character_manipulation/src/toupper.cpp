//toupper.cpp" Afilter that converts to capitals.
//------------------------------------------------------------
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char c;
		
	long nChar = 0,          //Counts all characters
		nConv = 0;           //and converted characters
	while (cin.get(c))       //As long as a character can be
	{                        //read, to increment.   
		++nChar;
		if (islower(c))      //Lowercase letter?
		{
			c = toupper(c);  //Converts the character 
			++nConv;         //and counts it.
		}
		std::cout.put(c);    //Outputs the character.
	}
	std::clog << "\nTotal of characters:           " << nChar
		<< "\nTotal of converted characters: " <<nConv
		<< std::endl;
	return 0;
}