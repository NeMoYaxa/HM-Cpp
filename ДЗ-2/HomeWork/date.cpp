#include <iostream>
#include <assert.h>
#include "date.h"

using namespace std;

void printMonth(Month mon)
{
	switch (mon)
	{
	case Month::JAN:
		cout << "January";
		break;
	case Month::FEB:
		cout << "February";
		break;
	case Month::MAR:
		cout << "March";
		break;
	case Month::APR:
		cout << "April";
		break;
	case Month::MAY:
		cout << "May";
		break;
	case Month::JUN:
		cout << "June";
		break;
	case Month::JUL:
		cout << "July";
		break;
	case Month::AUG:
		cout << "August";
		break;
	case Month::SEP:
		cout << "September";
		break;
	case Month::OCT:
		cout << "October";
		break;
	case Month::NOV:
		cout << "November";
		break;
	case Month::DEC:
		cout << "December";
		break;
	}
}

Month nextMonth(Month mon)
{
	return (mon == Month::DEC) ? Month::JAN : static_cast<Month>((int)mon + 1);
}

Month prevMonth(Month mon)
{
	return (mon == Month::JAN) ? Month::DEC : static_cast<Month>((int)mon - 1);
}

bool isLeapYear(int year)
{
	assert(year > 0);
	return  ((year % 4 != 0) || ((year % 100 == 0) && (year % 400 != 0))) == false;
}

int daysInMonth(Month mon, int year)
{
	switch (mon)
	{
	case Month::JAN:
		return 31;
		break;
	case Month::FEB:
		return isLeapYear(year) ? 29 : 28;
		break;
	case Month::MAR:
		return 31;
		break;
	case Month::APR:
		return 30;
		break;
	case Month::MAY:
		return 31;
		break;
	case Month::JUN:
		return 30;
		break;
	case Month::JUL:
		return 31;
		break;
	case Month::AUG:
		return 31;
		break;
	case Month::SEP:
		return 30;
		break;
	case Month::OCT:
		return 31;
		break;
	case Month::NOV:
		return 30;
		break;
	case Month::DEC:
		return 31;
		break;
	}
}

void nextDate(int& year, Month& mon, Day& day)
{
	assert(year >= 0 && day >= 1 && day <= 31);
	if (day > daysInMonth(mon, year))
	{
		cout << "Error: Неверно указ день в месяце";
		return;
	}

	if (daysInMonth(mon, year) == day)
	{
		printMonth(nextMonth(mon));
		day = 1;
		cout << " " << day;
	}
	else
	{
		printMonth(mon);
		cout << " " << ++day;
	}
}