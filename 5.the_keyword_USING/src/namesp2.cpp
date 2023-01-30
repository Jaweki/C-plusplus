//namesp2.cpp
//Demonstrates the use of using-declaratons and 
//using-directives.
//------------------------------------------------------
#include <iostream>              //Namespace std

void message()                   //Global function::message()
{
	std::cout << "Within function ::message()\n";
}
namespace A
{
	using namespace std;         //Names of std are visible here
	void message()               //Function A::message()
	{
		std::cout << "Within function A::message()\n";
	}
}

namespace B
{
	using std::cout;             //Declaring cout of std.
	void message(void);          //Function B::message()
}
void B::message(void)            //Defining B::message()
{
	std::cout << "Within function B::message()\n";
}

int main()
{
	using namespace std;         //Names of namespace std
	using B::message;            //Function name without 
	                             //traces!
	std::cout << "Testing namespace! \n";
	std::cout << "\nCall of A::message() " << std::endl;
	A::message();
	std::cout << "\nCall of B::message() " << std::endl;
	message();                   //::message() is hidden because
	                             //of the using-declaration.
	std::cout << "\nCall of ::message()" << std::endl;
	::message();                 //Global function.

	return 0;
}