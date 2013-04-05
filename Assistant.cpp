//*****************************************************************************
//	File:	Assistant.cpp 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Extends Employee for assistant sub class	
//*****************************************************************************
#include "Assistant.h"
#include <iostream>

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

