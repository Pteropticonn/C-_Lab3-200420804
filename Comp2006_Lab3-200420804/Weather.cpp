#include <iostream>
#include "Weather.h"
#include <string>
#include <sstream> 
#include <iomanip>

using namespace std;

void Weather::setData(const char* date, double tempLow, double tempHigh) {
	this->tempLow = tempLow;
	this->tempHigh = tempHigh;
	strncpy_s(calendarDate, date, 7);
}

void Weather::display() const {
	/* • void display() const – a query that displays the high and low temperature
		as well as the associated calendar date in the following format:
		date left justified in a field of 10 using underscore '_' instead of whitespace

		*/
	cout.fill('_');
	cout.width(10);
	cout.setf(ios::left);
	cout << calendarDate << endl;
	cout.unsetf(ios::left);
	cout.setf(ios::right);
	cout.width(6);
	cout << setprecision(1) << fixed << tempLow << endl;
	cout.width(6);
	cout << setprecision(1) << fixed << tempHigh << endl;
	cout.unsetf(ios::right);
		
	/* high and low temperatures right justified in fields of 6 with 1 decimal place
		each using underscore '_' instead of white space */


}
