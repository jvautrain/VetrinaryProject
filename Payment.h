//*****************************************************************************
//	File:	Payment.h 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Class for payments
//*****************************************************************************
#include <string>
#include "DateTime.h"
#ifndef PAYMENT_H
#define PAYMENT_H

class Payment
{
private:
	DateTime dateReceived;
	double amountReceived;
	String paymentMethod;
	void promptAndStorePaymentInformation();
public:
	Payment();
	bool setDate(DateTime);
	bool setAmount(double);
	bool setMethod(String);
	DateTime getDate() const;
	double getAmount() const;
	String getMethod() const;
};
#endif