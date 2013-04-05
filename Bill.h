//*****************************************************************************
//	File:	Bill.H
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Header file for bill class	
//*****************************************************************************
#ifndef BILL_H
#define BILL_H

#include <string>

class DateTime;

class Bill
{

private:
	DateTime invoiceDate;
	DateTime dueDate;
	string careDescription;
	double procedureAmount;
	string procedureDescription;
	double adjustmentAmount;
	string adjustmentDescription;
	double taxAmount;
	string taxDescription;
	void promptAndStoreBillInfo();
public:
	bool setDates(DateTime, DateTime);
	bool setCare(double, string);
	bool setProcedure(double, string);
	bool setScript(double, string);
	bool setAdjustment(double string);
	bool setTax(double, string);
	DateTime getInvoiceDate() const;
	DateTime getDueDate() const;
	double getCareAmount() const;
	string getCareDescription() const;
	double getProcedureAmount() const;
	string getProcedureDescription() const;
	double getScriptAmount() const;
	string getScriptDescription() const;
	double getAdjustmentAmount() const;
	string getAdjustmentDescription() const;
	double getTaxAmount() const;
	string getDescription() const;
	double getSubTotal() const;
	double getTotal() const;
	void newPayment() const;
};
#endif