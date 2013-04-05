//*****************************************************************************
//	File:	Address.h 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Address class.
//*****************************************************************************
#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address
{
	Public:
		string addressLine1;
		string addressLine2;//TODO discuss this.
		string city;		//Consider use of struct here or providing accessor and mutator functions.
		string state;
		string zip;
};
#endif