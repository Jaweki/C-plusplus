//ref1.cpp
//Demonstrates the definition and use of references.
//-----------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

float x = 10.7F;                    //Global

int main()
{
	float& rx = x;                  //Local reference to x
	//double &ref = x               //Error: different types!

	rx *= 2;

	std::cout << " x= " << x << std::endl;      //x= 21.4
	std::cout << "rx= " << rx << std::endl;     //rx =21.4
	const float& cref = x;            //Read-only reference
	std::cout << "cref= " << cref << std::endl;     //ok!
	//++cref;                          //Error: read-only!
	const string str = "I am a constant string! ";
	//str = "That doesn't work! ";      //Error:str constant!
	//string& text =str;                //Error:str constant!
	const string& text = str;           //ok!
	std::cout << text << std::endl;     //ok! Just reading.

	return 0;
}