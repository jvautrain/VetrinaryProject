//*****************************************************************************
//	File:	Employee.cpp
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	This is the phone class for employees and customers 
//*****************************************************************************
#include <string>
#include <iostream>
#include "Phone.h"

using namespace std;

void Phone::setPhone(string)
{
	cout << "Inside of Phone, within setPhone()" << endl;
}
void Phone::setPhone(string,string,string) //TODO: Need to add to visio
{
	cout << "Inside of Phone, within setPhone()" << endl;
} 
string Phone::getPhone() const
{
	cout << "Inside of Phone, within getPhone()" << endl;
}
