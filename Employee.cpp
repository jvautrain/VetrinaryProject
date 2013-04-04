//*****************************************************************************
//	File:	Employee.cpp 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	This is the parent class for all employees
//*****************************************************************************
#include <string>
#include <iostream>
#include "DateTime.h"
#include "Employee.h"

using namespace std;

Employee::Employee(string)
{
	cout << "Inside of Employee, within Employee()" << endl;
}
bool Employee::setEmployeeName(string, string, string)
{
	cout << "Inside of Employee, within setEmployeeName()" << endl;
}
bool Employee::terminateEmployee(DateTime)
{
	cout << "Inside of Employee, within terminateEmployee()" << endl;
}
void Employee::addTimeEntry()
{
	cout << "Inside of Employee, within addTimeEntry()" << endl;
}
