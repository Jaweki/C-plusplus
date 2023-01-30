#pragma once
//account.h
//Defining the class Account.
//------------------------------------------------
#ifndef _ACCOUNT_           //Avoid multiple inclusions
#define _ACCOUNT_

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Account
{
private:           //sheltered members:
	string name;         //Account holder
	unsigned long nr;    //Account number
	double balance;      //Account balance

public:            //Public interface.
	Account() {};
	Account(const string& Name, unsigned long Nr, double Balance) {
		this->name = Name;
		this->nr = Nr;
		this->balance = Balance;
	}
	Account(const string& Name, unsigned long Nr) {
		this->name = Name;
		this->nr = Nr;
	}
	Account(const char Name[30]) {
		this->name = Name;
	}
	void setBalance(double Balance) {
		this->balance = Balance;

	}
	void display() {
		string line(70,'-'), asterisk(20, '*');
		cout << "\n\n" << asterisk << "ACCOUNT " << name << " INFORMATION" << asterisk << std::endl;
		cout << setw(10) << " Name " << setw(30) << " Account Number " << setw(25) << " Account Balance " << std::endl;
		cout << line << std::endl;
		cout << setw(15) << name << setw(20) << nr << setw(25) << balance << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
};

#endif    // _ACCOUNT_
