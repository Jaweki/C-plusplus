// DayTim_t.cpp
// Tests class DayTime and function currentTime()
// ---------------------------------------------------
#include "DayTime.h" // Class definition
using namespace std;
const DayTime& currentTime(); // The current time.

int main()
{
	DayTime cinema(23, 50);
	cout << "\nThe movie starts at ";
	cinema.print();
	DayTime now(currentTime()); // Copy constructor
	cout << "\nThe current time is "; now.print();
	cout << "\nThe movie has ";
	if (cinema.isLess(now))
		cout << "already begun!\n" << endl;
	else
		cout << "not yet begun!\n" << endl;
	return 0;
}
