//*****************************************************************************
//	File:	Bill.cpp
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Implementation file for bill class	
//*****************************************************************************
#include <string>
#include "DateTime.h"
#include "Bill.h"
#include <iostream>
using namespace std;

bool Bill::setDates(DateTime, DateTime)
{
	cout << "Inside of Bill, within setDates()" << endl;
}
bool Bill::setCare(double, String)
{
	cout << "Inside of Bill, within setCare()" << endl;
}
bool Bill::setProcedure(double, String)
{
	cout << "Inside of Bill, within setProcedure()" << endl;
}
bool Bill::setScript(double, String)
{
	cout << "Inside of Bill, within setScript()" << endl;
}
bool Bill::setAdjustment(double String)
{
	cout << "Inside of Bill, within setAdjustment()" << endl;
}
bool Bill::setTax(double, String)
{
	cout << "Inside of Bill, within setTax()" << endl;
}
DateTime Bill::getInvoiceDate() const
{
	cout << "Inside of Bill, within getInvoiceDate()" << endl;
}
DateTime Bill::getDueDate() const
{
	cout << "Inside of Bill, within getDueDate()" << endl;
}
double Bill::getCareAmount() const
{
	cout << "Inside of Bill, within getCareAmount()" << endl;
}
String Bill::getCareDescription() const
{
	cout << "Inside of Bill, within getCareDescription()" << endl;
}
double Bill::getProcedureAmount() const
{
	cout << "Inside of Bill, within getProcedureAmount()" << endl;
}
String Bill::getProcedureDescription() const
{
	cout << "Inside of Bill, within getProcedureDescription()" << endl;
}
double Bill::getScriptAmount() const
{
	cout << "Inside of Bill, within getScriptAmount()" << endl;
}
String Bill::getScriptDescription() const
{
	cout << "Inside of Bill, within getScriptDescription()" << endl;
}
double Bill::getAdjustmentAmount() const
{
	cout << "Inside of Bill, within getAdjustmentAmount()" << endl;
}
String Bill::getAdjustmentDescription() const
{
	cout << "Inside of Bill, within getAdjustmentDescription()" << endl;
}
double Bill::getTaxAmount() const
{
	cout << "Inside of Bill, within getTaxAmount()" << endl;
}
String Bill::getDescription() const
{
	cout << "Inside of Bill, within getDescription()" << endl;
}
double Bill::getSubTotal() const
{
	cout << "Inside of Bill, within getSubTotal()" << endl;
}
double Bill::getTotal() const
{
	cout << "Inside of Bill, within getTotal()" << endl;
}
void Bill::newPayment() const
{
	cout << "Inside of Bill, within newPayment()" << endl;
}
void Bill::promptAndStoreBillInfo()
{
	cout << "Inside of Bill, within promptAndStoreBillInfo()" << endl;
}