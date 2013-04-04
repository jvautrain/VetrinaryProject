//*****************************************************************************
//	File:	Payment.cpp
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Class for payments
//*****************************************************************************
#include <string>
#include <iostream>
#include "DateTime.h"
#include "Payment.h"

using namespace std;

void Payment::promptAndStorePaymentInformation()
{
	cout << "Inside of Payment, within promptAndStorePaymentInformation()" << endl;
}
Payment::Payment()
{
	cout << "Inside of Payment, within Payment()" << endl;
}
bool Payment::setDate(DateTime)
{
	cout << "Inside of Payment, within setDate()" << endl;
}
bool Payment::setAmount(double)
{
	cout << "Inside of Payment, within setAmount()" << endl;
}
bool Payment::setMethod(String)
{
	cout << "Inside of Payment, within setMethod()" << endl;
}
DateTime Payment::getDate() const
{
	cout << "Inside of Payment, within getDate()" << endl;
}
double Payment::getAmount() const
{
	cout << "Inside of Payment, within getAmount()" << endl;
}
String Payment::getMethod() const
{
	cout << "Inside of Payment, within getMethod()" << endl;
}
