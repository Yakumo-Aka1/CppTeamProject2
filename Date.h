#pragma once
#ifndef DATE_H
#define DATE_H

class Date {
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	Date(int year, int month, int day): year(year), month(month), day(day) {
	}
	
};

#endif