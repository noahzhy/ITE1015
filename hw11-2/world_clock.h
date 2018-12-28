#ifndef __WorldClock__
#define __WorldClock__
#include <iostream>
using namespace std;

class WorldClock {
public:
	void Tick(int seconds = 1);
	bool SetTime(int hour, int minute, int second);
	int hour() const;
	int minute() const;
	int second() const;

private:
	int s=0;
};

ostream& operator<<(ostream& os, const WorldClock& c);

istream& operator>>(istream& is, WorldClock& c);

#endif
