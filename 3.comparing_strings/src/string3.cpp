//string3.cpp: Inputs and compares lines of text.
#include <iostream>
#include <string>
using namespace std;

string prompt = "Please enter two lines of text!\n",
line(30, '-');

int main()
{
	string line1, line2, key = "y";

	while (key == "y" || key == "Y")
	{
		std::cout << line << '\n' << prompt << line << std::endl;
		getline(cin, line1);          //read the first
		getline(cin, line2);          //and second line

		if (line1 == line2)
			std::cout << "Both lines are the same!" << std::endl;
		else
		{
			std::cout << "The smaller line is: \n\t";
			std::cout << (line1 < line2 ? line1 : line2) << std::endl;
			int len1 = line1.length(),
				len2 = line2.length();
			if (len1 == len2)
				std::cout << "Both lines have the same length!\n";
			else
			{
				std::cout << "The shorter line is: \n\t";
				std::cout << (len1 < len2 ? line1 : line2) << std::endl;
			}
		}
		std::cout << "\nRepeat? (y/n)";

		do
			getline(cin, key);
		while (key != "y" && key != "Y" && key != "n" && key != "N");
	} return 0;
}