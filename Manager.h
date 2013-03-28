//*****************************************************************************
//	File:	Manager.h 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	This is the child class of employees for managers
//*****************************************************************************
#include "Employee.h"
#ifndef MANAGER_H
#define MANAGER_H

class Manager: public Employee
{
private:
	double bonusAmount;
	double salaryAmount;
public:
	bool setCompensation(double, double);
	double getSalary() const;
	double getBonus() const;
	promptAndStoreManagerInfo();//TODO need to break this out into functions
};
#endif