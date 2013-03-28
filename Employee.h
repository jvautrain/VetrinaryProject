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
	String firstName;
	String lastName;
	String middleName;
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