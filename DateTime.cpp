//*****************************************************************************
//	File:	DateTime.cpp
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Implementation file for datetime class	
//*****************************************************************************

#include <ctime>
#include <string>
#include <iostream>
#include "DateTime.h"


DateTime::DateTime()
{
	cout << "Inside of DateTime, within DateTime()" << endl;
}
DateTime::DateTime(int, int, int, int, int, int)
{
	cout << "Inside of DateTime, within DateTime()" << endl;
}
DateTime::DateTime(std::string)
{
	cout << "Inside of DateTime, within DateTime()" << endl;
}
int DateTime::getYear() const
{
	cout << "Inside of DateTime, within getYear()" << endl;
}
int DateTime::getMonth() const
{
	cout << "Inside of DateTime, within getMonth()" << endl;
}
int DateTime::getDay() const
{
	cout << "Inside of DateTime, within getDay()" << endl;
}
int DateTime::getHour() const
{
	cout << "Inside of DateTime, within getHour()" << endl;
}
int DateTime::getMinute() const
{
	cout << "Inside of DateTime, within getMinute()" << endl;
}
int DateTime::getSecond() const
{
	cout << "Inside of DateTime, within getSecond()" << endl;
}
string DateTime::toString() const
{
	cout << "Inside of DateTime, within toString()" << endl;
}
bool DateTime::setYear(int)
{
	cout << "Inside of DateTime, within setYear()" << endl;
}
bool DateTime::setMonth(int)
{
	cout << "Inside of DateTime, within setMonth()" << endl;
}
bool DateTime::setDay(int)
{
	cout << "Inside of DateTime, within setDay()" << endl;
}
bool DateTime::setHour(int)
{
	cout << "Inside of DateTime, within setHour()" << endl;
}
bool DateTime::setMinute(int)
{
	cout << "Inside of DateTime, within setMinute()" << endl;
}
bool DateTime::setSecond(int)
{
	cout << "Inside of DateTime, within setSecond()" << endl;
}
DateTime DateTime::operator+(DateTime)
{
	cout << "Inside of DateTime, within operator+()" << endl;
}
DateTime DateTime::operator-(DateTime)
{
	cout << "Inside of DateTime, within operator-()" << endl;
}
iostream DateTime::operator<<(DateTime)
{
	cout << "Inside of DateTime, within operator<<()" << endl;
}