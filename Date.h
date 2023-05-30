#pragma once
#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
	int _year;
	int _month;
	int _day;

	Date(int year, int month, int day): _year(year), _month(month), _day(day) {
	}
	
	void set(int year, int month, int day) {
		_year = year;
		_month = month;
		_day = day;
	}

	std::string print() {
		return _year + "/" + _month + "/" + _day;
	}
};

#endif