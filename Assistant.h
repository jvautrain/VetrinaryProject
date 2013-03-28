//*****************************************************************************
//	File:	Assistant.h 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Extends Employee for assistant sub class	
//*****************************************************************************
#include "Employee.h"
#ifndef ASSISTANT_H
#define ASSISTANT_H

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