#include <iostream>
#include "world_clock.h"
using namespace std;

void WorldClock::Tick(int seconds) {
	this->s += seconds;
	if(this->s>=86400) {
		this->s -= 86400;
	}
	if(this->s<0) {
		this->s += 86400;
	}
}
bool WorldClock::SetTime(int hour, int minute, int second) {
	if ((hour >= 0 && hour < 24 ) && (minute >= 0 && minute < 60) && (second >= 0 && second < 60)) {
		this->s = hour * 3600 + minute * 60 + s ;
		cout<<hour<<":"<<minute<<":"<<second<<endl;
		return true;
	} else {
		cout<<"Invalid time: "<<hour<<":"<<minute<<":"<<second<<endl;
		return false;
	}
}
int WorldClock::hour() const {
	return (this->s / 3600) % 24;
}
int WorldClock::minute() const {
	return (this->s / 60) % 60;
}
int WorldClock::second() const {
	return this->s % 60;
}

ostream & operator<<(ostream & os, const WorldClock & c) {
	os << c.hour() << ":" << c.minute() << ":" << c.second();
	return os;
}

istream & operator>>(istream & is, WorldClock & c) {
	char cha;
	int h,m,s;
	is>>h>>cha>>m>>cha>>s;
	c.SetTime(h,m,s);
	return is;
}
