//string1.cpp: Using strings
#include <iostream>
#include <string>
using namespace std;

string prompt("Enter a line of text: "),    //Global
line(50, '*');

int main()
{
	string text;
	std::cout << line << std::endl << prompt << std::endl;
	getline(cin, text);
	std::cout << line << std::endl
		<< "Your text is " << text.size()
		<< " characters long!" << std::endl;

	string copy(text),
		start(text, 0.10);

	std::cout << "Your text:\n" << copy << std::endl;
	text = "1234567890";
	std::cout << line << std::endl
		<< "The first 10 Characters:\n" << start << std::endl
		<< text << std::endl;

	return 0;
}