//*****************************************************************************
//	File:	Employee.h 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	This is the parent class for all employees
//*****************************************************************************
#include <string>
#include "DateTime.h"
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
private:
	int employeeID;
	string firstName;
	string lastName;
	string middleName;
	DateTime hireDate;
	DateTime terminationDate;
	string gender;
public:
	Employee(string);
	bool setEmployeeName(string, string, string);
	bool terminateEmployee(DateTime);
	void addTimeEntry();
	//need to add employee information entry functions
};
#endif