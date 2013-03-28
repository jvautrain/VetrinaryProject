//*****************************************************************************
//	File:	Practioner.h 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	This is the child class of employees for practitioners
//*****************************************************************************
#include <string>
#include "Employee.h"
#include "DateTime.h"
#ifndef PRACTITIONER_H
#define PRACTITIONER_H

class Practitioner: public Employee
{
private:
	String certification;
	DateTime certExpirationDate;
	bool prescriber;
	String specialty;
	double salaryAmount;
public:
	bool setCertification(DateTime, String);
	bool setPrescriber(bool);
	bool setSpecialty(String);
	bool setCompensation(double);
	String getCertification() const;
	DateTime getCertExpirationDate() const;
	bool getPrescriber() const;
	double getSalary() const;
	void promptAndStorePractitionerInfo();//TODO need to define how were are setting values?
};
#endif