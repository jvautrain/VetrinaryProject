//*****************************************************************************
//	File:	Employee.h 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	This is thetime entry record for an employee
//*****************************************************************************
#include <string>
#include "DateTime.h"
#ifndef TIMEENTRY_H
#define TIMEENTRY_H

class TimeEntry
{
private:
	DateTime startDateTime;
	DateTime endDateTime;
	DateTime adjustmentDateTime;
	String adjustmentComment;	
	void promptAndStoreTimeEntryDetails(); //Need to define this (is it private) or should inteface functions be used....
public:
	TimeEntry(DateTime);
	bool setStart(DateTime);
	bool setEnd(DateTime);
	bool adjust(String, DateTime);
	DateTime getStart() const;
	DateTime getEnd() const;
	DateTime getAdjustmentDate() const;
	String getAdjustmentComment() const;
};
#endif