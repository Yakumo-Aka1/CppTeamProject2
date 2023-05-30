#pragma once
#ifndef ACCURATETIME_H
#define ACCURATETIME_H

#include "Date.h"

class AccurateTime : public Date {
	int _hour;
	int _minute;
	int _second;
	//This class is not necessary yet, don't need to develop it now
};

#endif // !ACCURATETIME_H
