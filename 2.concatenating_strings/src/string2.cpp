//string2.cpp: Reads several lines of text and outputs in reverse order

#include <iostream>
#include <string>
using namespace std;

string prompt("Please enter some text!\n"),
line(50, '-');

int main()
{
	prompt += "Terminate the input with an empty line.\n";

	std::cout << line << '\n' << prompt << line << std::endl;
	string text, line;                 //Empty strings

	while (true)
	{
		getline(cin, line);            //Reads aline of text
		if (line.length() == 0)        //Empty line?
			break;                     //Yes --> end of the loop

		text = line + '\n' + text;     //Insert a new
	}                                  //line at the beginning

	std::cout << line << '\n'
		<< "your lines of text in reverse order: "
		<< '\n' << line << std::endl;

	std::cout << text << std::endl;
	return 0;
}