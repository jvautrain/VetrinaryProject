//*****************************************************************************
//	File:	Visit.H
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Header file for visit class	
//*****************************************************************************
#include <string>
#include "DateTime.h"
#include "Practitioner.h"
#ifndef VISIT_H
#define VISIT_H

class Visit
{
private:
	DateTime date;
	String complaint;
	String condition;
	String treatment;
	DateTime followUpDate;
	Practitioner practitioner;
	void promptForComplaint();
	void promptForCondition();
	void promptForTreatment()
public:
	bool setDate(DateTime);
	bool setComplaint(String);
	bool setFollowUpDate(DateTime);
	bool setConditionString);
	bool setTreatment(String);
	DateTime getDate() const;
	String getComplaint() const;
	String getCondition() const;
	String getTreatment() const;
	DateTime getFollowUpDate() const;
	void newPayment();
};
#endif