#include <iostream>
#include <string>
using namespace std;

std::string tocamelstring(std::string);

int main()
{ 
	std::cout << " Enter a string for converstion and end it with a fullstop (.) " << std::endl;
	std::cout << "Your text : ";

	
	string read;
	std::getline(std::cin, read,'.');
	
	std::string conv_str = tocamelstring(read);

	std::cout << " The new string in Camel or Pascal Naming Convention is: " << std::endl;
	std::cout << "New text: " << conv_str << std::endl;

	return 0;
}

std::string tocamelstring(std::string text)
{
	std::string ref_text = text;
	unsigned long len = ref_text.length();

	for (unsigned long i = 0; i < len; ++i)
	{
		if (ref_text[i] == '-' || ref_text[i] == '_' || ref_text[i] == ' ')
		{
			ref_text[i + 1] = toupper(ref_text[i + 1]);

			std::string sub1 = ref_text.substr(0, i);
			std::string sub2 = ref_text.substr(i + 1, len - 1 - i);

			ref_text = sub1 + sub2;
		}
	}

	return ref_text;
}