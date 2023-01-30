//ptrObj.cpp
//Uses pointers to objects of class Account.
//---------------------------------------------------
#include "account.h"  //Includes<iostream>, <string>
bool getAccount(Account* pAccount);
int main()
{
	Account current1, current2, * ptr = &current1;

	ptr->init("cheer, Mary", 3512345, 99.40);
	ptr->display();

	ptr = &current2;
	if (getAccount(ptr))
		ptr->display();
	else
		cout << "Invalid input!" << endl;
	return 0;
}
//----------------------------------------------------
//getAccount() reads data for a new account
//and adds it into the argument.
bool getAccount(Account* pAccount)
{
	string name, line(50, '-'); // Local variables
	unsigned long nr;
	double startcapital;
	cout << line << '\n'
		<< "Enter data for a new account: \n"
		<< "Account holder: ";
	if (!getline(cin, name) || name.size() == 0)
		return false;
	cout << "Account number: ";
	if (!(cin >> nr)) return false;
	cout << "Starting capital: ";
	if (!(cin >> startcapital)) return false;
	// All input ok
	pAccount->init(name, nr, startcapital);
	return true;
}

