//*****************************************************************************
//	File:	Manager.cpp 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	This is the child class of employees for managers
//*****************************************************************************

#include <iostream>
#include "Manager.h"

using namespace std;


bool Manager::setCompensation(double, double)
{
	cout << "Inside of Manager, within setCompensation()" << endl;
}
double Manager::getSalary() const
{
	cout << "Inside of Manager, within getSalary()" << endl;
}
double Manager::getBonus() const
{
	cout << "Inside of Manager, within getBonus()" << endl;
}
void Manager::promptAndStoreManagerInfo()//TODO need to break this out into functions
{
	cout << "Inside of Manager, within promptAndStoreManagerInfo()" << endl;
}
