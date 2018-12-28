#ifndef __calendar__
#define __calendar__
#include <iostream>
using namespace std;

class Date {
public:
	Date();
	Date(int year, int month, int day);

	void NextDay(int n = 1);
	bool SetDate(int year, int month, int day);

	int year() const;
	int month() const;
	int day() const;

private:
	static int GetDaysInYear(int year);
	static int GetDaysInMonth(int year, int month);
	static int ComputeDaysFromYearStart(int year, int month, int day);

	int year_, month_, day_;
	int days;
};

struct InvalidDateException {
	string input_date;
	InvalidDateException(const string& str) : input_date(str) {}
};

ostream& operator<<(ostream& os, const Date& c);
istream& operator>>(istream& is, Date& c);

#endif
