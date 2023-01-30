//string4.cpp
//The program counts words and white space characters.
//(A word is the maximum sequence of characters
//containing no white space characters.)
//------------------------------------------------------
#include <iostream>
#include <string>
#include <cctype>                      //Macro is space()
using namespace std;

int main()
{
	string header("     **** Count word ****    \n"),
		prompt("Enter a text and terminate"
			" with a period(fullstop) and <return>: "),
		line(60, '-'),
		text;                          //Empty string

	std::cout << header << std::endl << prompt << std::endl << line << std::endl;
	getline(cin, text, '.');             //Reads a text up to the first '.'

    //Counts words and white space characters
	int i,                  //index
		nSpace = 0,         //Number of white spaces
		nWord = 0;          //Number of words
	bool fSpace = true;      //Flag for white space

	for (i = 0; i < text.length(); ++i)
	{
		if (isspace(text[i]))    //white space?
		{
			++nSpace; fSpace = true;
		}
		else if (fSpace)         //At the beginning of a word?
		{
			++nWord, fSpace = false;
		}
	}
	std::cout << line              //Outputs the result.
		<< "\nYour text contains(without periods)"
		<< "\n          characters: " << text.length()
		<< "\n               words: " << nWord
		<< "\n        white spaces: " << nSpace
		<< std::endl;

	return 0;
}