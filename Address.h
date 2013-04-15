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
public:
		std::string addressLine1;
		std::string addressLine2;
		std::string city;
		std::string state;
		std::string zip;
};
#endif