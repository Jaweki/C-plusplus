//Reads a text with the operator >>
//and the function getline()
#include <iostream>
#include <string>
using namespace std;

string header = "---Demonstrates Unformatted Input---";

int main()
{
	string word, rest;

	std::cout << header
		<< "\n\nPress <return> or <enter> to go on" << std::endl;

	std::cin.get();     //Read the new line without saving
	
	std::cout << "\nPlease enter a sentence with several words!"
		<< "\nEnd with <!> and <return>." 
		<< std::endl;

	std::cin >> word;                  //Read the first word
	getline(cin, rest, '!');           //and the remaining text
	                                   //up to the character!
	std::cout << "\nThe first word:   " << word
		<< "\nRemaining text:   " << rest << std::endl;

	return 0;
}