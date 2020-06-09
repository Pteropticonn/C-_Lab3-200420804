// COMP 2006 Lab3: Dynamic Memory
// File: part_one_main.cpp
// Version 1.0
// Date 17 October 2019
// Author: Jeff Grant - 200420804
// Description
// This file is used to demonstrate dynamic memory in
// C++ and to process an array of objects of compound
// type where the user specifies the number of
// elements in the array at run-time.
/////////////////////////////////////////////////////
#include <iostream>
#include "Weather.h"
#include <string>

using namespace std;

int main()
{
	int i; // loop counter
	int n; // number of objects in Weather array
	Weather* weatherArray = NULL;
	cout << "Weather Data" << endl
		<< "=====================" << endl
		<< "Days of Weather: ";
	cin >> n;
	cin.ignore();
	weatherArray = new Weather[n];
	for (i = 0; i < n; i++)
	{
		char dateDescription[7];
		double high;
		double low;

		cout << "Enter date: ";
		cin.getline(dateDescription, 7);
		cout << "Enter high: ";
		string highString;
		getline(cin, highString);
		high = stod(highString);
		cout << "enter low: ";
		string lowString;
		getline(cin, lowString);
		low = stod(lowString);

		weatherArray[i].setData(dateDescription, high, low);
	}
	cout << endl
		<< "Weather report:" << endl
		<< "Date high low" << endl
		<< "======================" << endl;
	for (i = 0; i < n; i++)
	{
		weatherArray[i].display();
	}
	delete[] weatherArray;
	weatherArray = NULL;
	return 0;
}