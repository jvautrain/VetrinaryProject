//*****************************************************************************
//	File:	DateTime.H
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Header file for datetime class	
//*****************************************************************************
#ifndef DATETIME_H
#define DATETIME_H
#include <ctime>
#include <string>
#include <iostream>

class DateTime
{
private:
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
public:
	DateTime(); //set to current system time
	DateTime(int, int, int, int, int, int);
	DateTime(std::string);
	int getYear() const;
	int getMonth() const;
	int getDay() const;
	int getHour() const;
	int getMinute() const;
	int getSecond() const;
	string tostring() const;

	bool setYear(int);
	bool setMonth(int);
	bool setDay(int);
	bool setHour(int);
	bool setMinute(int);
	bool setSecond(int);
	DateTime operator+(DateTime);
	DateTime operator-(DateTime);
	iostream operator<<(DateTime);
};
#endif

/*
	DateTime()
	{
		using namespace std; //get access to std's current time function
							//which provides secs since epoc
		time_t currentTimeEpoc = time(0);
		struct tm *currentTimeFormatter = localtime(&currentTimeEpoc);
		year = (currentTimeFormatter->tm_year + 1900);
        month = (currentTimeFormatter->tm_mon + 1);
        day = (currentTimeFormatter->tm_mday);

	}
*/