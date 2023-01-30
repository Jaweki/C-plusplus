//To use strings.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Defines four strings
	string prompt("What is your name: "),
		name,              //An empty
		line(40, '-'),     //string with 40 '-'
		total = "Hello ";   //is possible!

	std::cout << prompt;   //Request for input
	getline(cin, name);    //Inputs a name in one line

	total += name;  //concatenates and assigns strings.

	std::cout << line <<'\n'
		      << total << '\n'
	          << "Your name is "
		      << name.length() << " characters long! " << '\n'
	          << line << std::endl;

	return 0;
}