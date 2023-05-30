#pragma once
#ifndef DATE_H
#define DATE_H

class Date {
	int _year;
	int _month;
	int _day;
	int _hour;
	int _minute;
	int _second;
	Date(int year, int month, int day): _year(year), _month(month), _day(day) {
	}
	
};

#endif