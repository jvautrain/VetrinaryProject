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
	String areaCode;
	String exchangeCode;
	String lineNumber;
public:
	setPhone(String);
	setPhone(String,String,String);  //TODO: Need to add to visio
	String getPhone() const;
};
#endif