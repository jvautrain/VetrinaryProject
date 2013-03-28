//*****************************************************************************
//	File:	Bill.H
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Header file for bill class	
//*****************************************************************************
#include <string>
#include "DateTime.h"
#ifndef BILL_H
#define BILL_H

class Bill
{

private:
	DateTime invoiceDate;
	DateTime dueDate;
	String careDescription;
	double procedureAmount;
	String procedureDescription;
	double adjustmentAmount;
	String adjustmentDescription;
	double taxAmount;
	String taxDescription;
	void promptAndStoreBillInfo();
public:
	bool setDates(DateTime, DateTime);
	bool setCare(double, String);
	bool setProcedure(double, String);
	bool setScript(double, String);
	bool setAdjustment(double String);
	bool setTax(double, String);
	DateTime getInvoiceDate() const;
	DateTime getDueDate() const;
	double getCareAmount() const;
	String getCareDescription() const;
	double getProcedureAmount() const;
	String getProcedureDescription() const;
	double getScriptAmount() const;
	String getScriptDescription() const;
	double getAdjustmentAmount() const;
	String getAdjustmentDescription() const;
	double getTaxAmount() const;
	String getDescription() const;
	double getSubTotal() const;
	double getTotal() const;
	void newPayment() const;
};
#endif