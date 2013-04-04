//*****************************************************************************
//	File:	Employee.cpp
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	This is thetime entry record for an employee
//*****************************************************************************
#include <string>
#include <iostream>
#include "DateTime.h"
#include "TimeEntry.h"

using namespace std;

TimeEntry::TimeEntry(DateTime)
{
	cout << "Inside of TimeEntry, within TimeEntry()" << endl;
}
void TimeEntry::promptAndStoreTimeEntryDetails()//Need to define this (is it private) or should inteface functions be used....
{
	cout << "Inside of TimeEntry, within promptAndStoreTimeEntryDetails()" << endl;
} 
bool TimeEntry::setStart(DateTime)
{
	cout << "Inside of TimeEntry, within setStart()" << endl;
}
bool TimeEntry::setEnd(DateTime)
{
	cout << "Inside of TimeEntry, within setEnd()" << endl;
}
bool TimeEntry::adjust(String, DateTime)
{
	cout << "Inside of TimeEntry, within adjust()" << endl;
}
DateTime TimeEntry::getStart() const
{
	cout << "Inside of TimeEntry, within getStart()" << endl;
}
DateTime TimeEntry::getEnd() const
{
	cout << "Inside of TimeEntry, within getEnd()" << endl;
}
DateTime TimeEntry::getAdjustmentDate() const
{
	cout << "Inside of TimeEntry, within getAdjustmentDate()" << endl;
}
String TimeEntry::getAdjustmentComment() const
{
	cout << "Inside of TimeEntry, within getAdjustmentComment()" << endl;
}