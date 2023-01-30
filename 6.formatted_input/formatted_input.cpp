//Inputs an article label and a price
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string label;
	double price;
	std::cout << "\nPlease enter an article label (15 characters maximum): ";
	//Input the label (15 characters maximum):
	std::cin >> setw(16);                          //or: cin.width(16);
	std::cin >> label;   //will only read one string not more than 15 characters,
	                     //Thus it ignores: - characters beyond the 15th character,
	                     //                 - character followed by white spaces; insteat use ***getline(cin, label)***

	std::cin.sync();     //Clears the buffer and resets
	std::cin.clear();    //any error flags that may be set

	std::cout << "\nEnter the price of the article: ";
	std::cin >> price;   //Input the price

	//controlling output
	std::cout <<fixed << setprecision(2)
		<< "\nArticle::--> "
		<< "\nLabel:   " << label
		<< "\nPrice:   " << price << std::endl;

	//...The program to be continued

	return 0;


 
}