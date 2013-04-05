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
	string complaint;
	string condition;
	string treatment;
	DateTime followUpDate;
	Practitioner practitioner;
	void promptForComplaint();
	void promptForCondition();
	void promptForTreatment()
public:
	bool setDate(DateTime);
	bool setComplaint(string);
	bool setFollowUpDate(DateTime);
	bool setConditionstring);
	bool setTreatment(string);
	DateTime getDate() const;
	string getComplaint() const;
	string getCondition() const;
	string getTreatment() const;
	DateTime getFollowUpDate() const;
	void newPayment();
};
#endif