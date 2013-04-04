//*****************************************************************************
//	File:	Visit.cpp
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Implementation file for visit class	
//*****************************************************************************
#include <string>
#include <iostream>
#include "Visit.h"
#include "DateTime.h"
#include "Practitioner.h"

using namespace std;

void Visit::promptForComplaint()
{
	cout << "Inside of Visit, within promptForComplaint()" << endl;
}
void Visit::promptForCondition()
{
	cout << "Inside of Visit, within promptForCondition()" << endl;
}
void Visit::promptForTreatment()
{
	cout << "Inside of Visit, within promptForTreatment()" << endl;
}
bool Visit::setDate(DateTime)
{
	cout << "Inside of Visit, within setDate()" << endl;
}
bool Visit::setComplaint(String)
{
	cout << "Inside of Visit, within setComplaint()" << endl;
}
bool Visit::setFollowUpDate(DateTime)
{
	cout << "Inside of Visit, within setFollowUpDate()" << endl;
}
bool Visit::setCondition(String)
{
	cout << "Inside of Visit, within setCondition()" << endl;
}
bool Visit::setTreatment(String)
{
	cout << "Inside of Visit, within setTreatment()" << endl;
}
DateTime Visit::getDate() const
{
	cout << "Inside of Visit, within getDate()" << endl;
}
String Visit::getComplaint() const
{
	cout << "Inside of Visit, within getComplaint()" << endl;
}
String Visit::getCondition() const
{
	cout << "Inside of Visit, within getCondition()" << endl;
}
String Visit::getTreatment() const
{
	cout << "Inside of Visit, within getTreatment()" << endl;
}
DateTime Visit::getFollowUpDate() const
{
	cout << "Inside of Visit, within getFollowUpDate()" << endl;
}
void Visit::newPayment()
{
	cout << "Inside of Visit, within newPayment()" << endl;
}