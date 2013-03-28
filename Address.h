//*****************************************************************************
//	File:	Address.h 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Address class.
//*****************************************************************************
#include <string>

#ifndef ADDRESS_H
#define ADDRESS_H

class Address
{
	Public:
		String addressLine1;
		String addressLine2;//TODO discuss this.
		String city;		//Consider use of struct here or providing accessor and mutator functions.
		String state;
		String zip;
};
#endif