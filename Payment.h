//*****************************************************************************
//	File:	Payment.h 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Class for payments
//*****************************************************************************
#include <string>

#ifndef PAYMENT_H
#define PAYMENT_H

class DateTime;

class Payment
{
private:
	DateTime dateReceived;
	double amountReceived;
	string paymentMethod;
	void promptAndStorePaymentInformation();
public:
	Payment();
	bool setDate(DateTime);
	bool setAmount(double);
	bool setMethod(string);
	DateTime getDate() const;
	double getAmount() const;
	string getMethod() const;
};
#endif