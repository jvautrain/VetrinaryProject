//*****************************************************************************
//	File:	Assistant.h 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Extends Employee for assistant sub class	
//*****************************************************************************
#ifndef ASSISTANT_H
#define ASSISTANT_H

#include "Employee.h"

class Assistant: public Employee
{
private:
	double hourlyWageAmount;
public:
	bool setCompensation(double);
	double getWage() const;
	void promptAndStoreAssistantInfo(); 
};
#endif