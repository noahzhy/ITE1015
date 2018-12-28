#include "calendar.h"
#include <string>
#include <iostream>
using namespace std;

Date::Date() {
	this->day_ = 0;
	this->year_ = 0;
	this->month_ = 0;
}
Date::Date(int year, int month, int day) {
	this->year_ = year;
	this->month_ = month;
	this->day_ = day;
}

void Date::NextDay(int n) {
	this->days = ComputeDaysFromYearStart(year_, month_, day_) + n;
	while (this->days < 1) {
		this->days += GetDaysInYear(--this->year_);
	}

	while (this->days > GetDaysInYear(this->year_)) {
		this->days -= GetDaysInYear(this->year_++);
	}
	int month_sum = 0;
	for (int m = 1; m <= 12; ++m) {
		int month_day = GetDaysInMonth(this->year_, m);
		if (month_sum < this->days && this->days <= month_sum + month_day) {
			this->month_ = m;
			this->day_ = this->days - month_sum;
			break;
		}
		month_sum += month_day;
	}
}
bool Date::SetDate(int year, int month, int day) {

	if ((year >= 0) && (month >= 1 && month <= 12) && (day >= 1 && day <= GetDaysInMonth(year, month))) {
		this->year_ = year;
		this->month_ = month;
		this->day_ = day;
		return true;
	} else {
		string e = to_string(year) + "." + to_string(month) + "." + to_string(day);
		char const *pc = e.c_str();
		throw InvalidDateException(pc);
	}
	return false;
}

int Date::year() const {
	return this->year_;
}
int Date::month() const {
	return this->month_;
}
int Date::day() const {
	return this->day_;
}

int Date::GetDaysInYear(int year) {
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		return 366;
	} else {
		return 365;
	}
}

int Date::GetDaysInMonth(int year, int month) {
	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (GetDaysInYear(year) == 366 && month == 2) {
		return 29;
	} else {
		return days[month];
	}
}

int Date::ComputeDaysFromYearStart(int year, int month, int day) {
	for (int i = 1; i < month; ++i) {
		day += GetDaysInMonth(year, i);
	}
	return day;
}

ostream& operator<<(ostream & os, const Date & c) {
	os << c.year() << '.' << c.month() << '.' << c.day();
	return os;
}
istream& operator>>(istream & is, Date & c) {
	char sep;
	int year, month, day;
	is >> year >> sep >> month >> sep >> day;
	c.SetDate(year, month, day);
	return is;
}
