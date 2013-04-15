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
	std::cout << "Inside of DateTime, within DateTime()" << std::endl;
}
DateTime::DateTime(int, int, int, int, int, int)
{
	std::cout << "Inside of DateTime, within DateTime()" << std::endl;
}
DateTime::DateTime(std::string)
{
	std::cout << "Inside of DateTime, within DateTime()" << std::endl;
}
int DateTime::getYear() const
{
	std::cout << "Inside of DateTime, within getYear()" << std::endl;
}
int DateTime::getMonth() const
{
	std::cout << "Inside of DateTime, within getMonth()" << std::endl;
}
int DateTime::getDay() const
{
	std::cout << "Inside of DateTime, within getDay()" << std::endl;
}
int DateTime::getHour() const
{
	std::cout << "Inside of DateTime, within getHour()" << std::endl;
}
int DateTime::getMinute() const
{
	std::cout << "Inside of DateTime, within getMinute()" << std::endl;
}
int DateTime::getSecond() const
{
	std::cout << "Inside of DateTime, within getSecond()" << std::endl;
}
std::string DateTime::tostring() const
{
	std::cout << "Inside of DateTime, within tostring()" << std::endl;
}
bool DateTime::setYear(int)
{
	std::cout << "Inside of DateTime, within setYear()" << std::endl;
}
bool DateTime::setMonth(int)
{
	std::cout << "Inside of DateTime, within setMonth()" << std::endl;
}
bool DateTime::setDay(int)
{
	std::cout << "Inside of DateTime, within setDay()" << std::endl;
}
bool DateTime::setHour(int)
{
	std::cout << "Inside of DateTime, within setHour()" << std::endl;
}
bool DateTime::setMinute(int)
{
	std::cout << "Inside of DateTime, within setMinute()" << std::endl;
}
bool DateTime::setSecond(int)
{
	std::cout << "Inside of DateTime, within setSecond()" << std::endl;
}
DateTime DateTime::operator+(DateTime)
{
	std::cout << "Inside of DateTime, within operator+()" << std::endl;
}
DateTime DateTime::operator-(DateTime)
{
	std::cout << "Inside of DateTime, within operator-()" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const DateTime& dt)
{
	os << dt.getMonth() << '/' << dt.getDay() << '/' << dt.getYear();
    return os;
}