//*****************************************************************************
//	File:	Employee.h 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	This is thetime entry record for an employee
//*****************************************************************************
#include <string>
#ifndef TIMEENTRY_H
#define TIMEENTRY_H

class DateTime;

class TimeEntry
{
private:
	DateTime startDateTime;
	DateTime endDateTime;
	DateTime adjustmentDateTime;
	string adjustmentComment;	
	void promptAndStoreTimeEntryDetails(); //Need to define this (is it private) or should inteface functions be used....
public:
	TimeEntry(DateTime);
	bool setStart(DateTime);
	bool setEnd(DateTime);
	bool adjust(string, DateTime);
	DateTime getStart() const;
	DateTime getEnd() const;
	DateTime getAdjustmentDate() const;
	string getAdjustmentComment() const;
};
#endif