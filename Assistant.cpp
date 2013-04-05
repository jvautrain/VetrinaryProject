//*****************************************************************************
//	File:	Assistant.cpp 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Extends Employee for assistant sub class	
//*****************************************************************************
#include <iostream>
#include "Assistant.h"

using namespace std;

bool Assistant::setCompensation(double)
{
	cout << "Inside of Assistant, within setCompensation()" << endl;
}

double Assistant::getWage() const
{
	return hourlyWageAmount;
}

void promptAndStoreAssistantInfo()
{
	cout << "Inside of Assistant, within promptAndStoreAssistantInfo()" << endl;
}

