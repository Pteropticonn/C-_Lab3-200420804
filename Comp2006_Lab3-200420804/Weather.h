#pragma once
#include <iostream>

class Weather {

private:
	char calendarDate[8];
	double tempHigh, tempLow;

public:
	void setData(const char*, double, double);

	void display() const;
};