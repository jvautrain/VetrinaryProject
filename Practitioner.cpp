//*****************************************************************************
//	File:	Practioner.cpp
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	This is the child class of employees for practitioners
//*****************************************************************************
#include <string>
#include <iostream>
#include "Practitioner.h"
#include "DateTime.h"

using namespace std;

bool Practitioner::setCertification(DateTime, String)
{
	cout << "Inside of Practitioner, within setCertification()" << endl;
}
bool Practitioner::setPrescriber(bool)
{
	cout << "Inside of Practitioner, within setPrescriber()" << endl;
}
bool Practitioner::setSpecialty(String)
{
	cout << "Inside of Practitioner, within setSpecialty()" << endl;
}
bool Practitioner::setCompensation(double)
{
	cout << "Inside of Practitioner, within setCompensation()" << endl;
}
String Practitioner::getCertification() const
{
	cout << "Inside of Practitioner, within getCertification()" << endl;
}
DateTime Practitioner::getCertExpirationDate() const
{
	cout << "Inside of Practitioner, within getCertExpirationDate()" << endl;
}
bool Practitioner::getPrescriber() const
{
	cout << "Inside of Practitioner, within getPrescriber()" << endl;
}
double Practitioner::getSalary() const
{
	cout << "Inside of Practitioner, within getSalary()" << endl;
}
void Practitioner::promptAndStorePractitionerInfo()//TODO need to define how were are setting values?
{
	cout << "Inside of Practitioner, within promptAndStorePractitionerInfo()" << endl;
}
