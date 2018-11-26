#include <iostream>
#include <iomanip>
#include "clock_time.h"

using namespace::std;

ClockTime::
ClockTime ()
	: hour_(0),
	  minute_(0),
	  second_(0),
	  secondsPerTick_(0),
	  deltaTime_(0) {
	recordStartTime();
}

ClockTime::
ClockTime (int hour, int minute, int second, int secondsPerTick)
	: hour_(hour),
	  minute_(minute),
	  second_(second),
	  secondsPerTick_(secondsPerTick),
	  deltaTime_(0) {
	recordStartTime();
}

void ClockTime::
reset ()
// The purpose of this method is to reset the time to the recorded
// start time.
{
	unsigned int temp = startTime_;

	hour_  = temp / (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
	temp  -= hour_ * (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);

	minute_  = temp / SECONDS_PER_MINUTE;
	temp    -= minute_* SECONDS_PER_MINUTE;

	second_ = temp;
}

void ClockTime::
increment ()
// The purpose of this method is to increment the clock time by the number
// of seconds by which the time is to advance per tick.
{
	deltaTime_ += secondsPerTick_;

	// Compute the new time in terms of seconds.
	int seconds = hour_   * MINUTES_PER_HOUR * SECONDS_PER_MINUTE +
	              minute_ * SECONDS_PER_MINUTE                    +
	              second_                                         +
	              secondsPerTick_;

	// If the new time is greater than the number of seconds in a day, adjust
	// the new time to reflect the number of seconds past midnight.
	if (seconds > (HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE))
		seconds -= (HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE);

	hour_ = seconds  / (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
	seconds -= hour_ * (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);

	minute_ = seconds / SECONDS_PER_MINUTE;
	seconds -= minute_ * SECONDS_PER_MINUTE;

	second_ = seconds;
}

void ClockTime::
display () const
// The purpose of this method is to display the values stored in
// an instance of simulation time.
{
	cout << right << setw(2) << setfill('0') << hour_   << ":"
	     << right << setw(2) << setfill('0') << minute_ << ":"
	     << right << setw(2) << setfill('0') << second_;
}

void ClockTime::       // Private method
recordStartTime ()
// The purpose of this method is to compute and record the start time.
{
	startTime_ = hour_   * MINUTES_PER_HOUR * SECONDS_PER_MINUTE +
	             minute_ * SECONDS_PER_MINUTE                    +
	             second_;
}

//0
Clock::Clock(int hour, int minute, int second, double driftPerSecond){
	this->_clockTime.setTime(hour, minute, second, 1);
	this->_driftPerSecond = driftPerSecond;
	this->_totalDrift = 0;

}
void Clock::reset() {
	this->_clockTime.reset();
}
void Clock::tick() {
	_clockTime.increment();
	_totalDrift += _driftPerSecond;
}

NaturalClock::NaturalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {

}

MechanicalClock::MechanicalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {

}

DigitalClock::DigitalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {

}

QuantumClock::QuantumClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {

}

//second_level
SundialClock::SundialClock(int hour, int minute, int second) : NaturalClock(hour, minute, second, 0.0) {

}
void SundialClock::displayTime() {
	cout<< "SundialClock ";
	_clockTime.display();
	cout<< ", total drift: " << _totalDrift<< endl;
}

CuckooClock::CuckooClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second, 0.0) {

}
void CuckooClock::displayTime() {
	cout<< "CuckooClock ";
	_clockTime.display();
	cout<< ", total drift: " << _totalDrift<< endl;
}

GrandFatherClock::GrandFatherClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second,0.000694444) {

}
void GrandFatherClock::displayTime() {
	cout<< "GrandFatherClock ";
	_clockTime.display();
	cout<< ", total drift: " << _totalDrift<< endl;
}

WristClock::WristClock(int hour, int minute, int second) : DigitalClock(hour, minute, second,0.000347222) {

}
void WristClock::displayTime() {
	cout<< "WristClock ";
	_clockTime.display();
	cout<< ", total drift: " << _totalDrift<< endl;
}

AtomicClock::AtomicClock(int hour, int minute, int second) : QuantumClock(hour, minute, second,0.000034722) {

}
void AtomicClock::displayTime() {
	cout<< "AtomicClock ";
	_clockTime.display();
	cout<< ", total drift: " << _totalDrift<< endl;
}
