//*****************************************************************************
//	File:	Employee.h 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	This is the phone class for employees and customers 
//*****************************************************************************
#include <string>

#ifndef PHONE_H
#define PHONE_H

class Phone
{
private:
	string areaCode;
	string exchangeCode;
	string lineNumber;
public:
	setPhone(string);
	setPhone(string,string,string);  //TODO: Need to add to visio
	string getPhone() const;
};
#endif