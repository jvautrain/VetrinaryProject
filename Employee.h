//*****************************************************************************
//	File:	Employee.h 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	This is the parent class for all employees
//*****************************************************************************
#include <string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class DateTime;

class Employee
{
private:
	int employeeID;
	std::string firstName;
	std::string lastName;
	std::string middleName;
	DateTime hireDate;
	DateTime terminationDate;
	std::string gender;
public:
	Employee(string);
	bool setEmployeeNamestd::(string, std::string, std::string);
	bool terminateEmployee(DateTime);
	void addTimeEntry();
	//need to add employee information entry functions
};
#endif