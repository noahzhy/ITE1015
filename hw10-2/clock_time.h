#ifndef CLOCK_TIME_H
#define CLOCK_TIME_H

// Define a set of symbolic constants used to specify various values related
// to time keeping.
#define SECONDS_PER_MINUTE      60
#define MINUTES_PER_HOUR        60
#define HOURS_PER_DAY           24

class ClockTime
// ClockTime is a concrete identity class used to keep track of current
// time as it is moves forward.  Note that time cannot be regressed.
//
// NOTE: Copying an instance of this class is bit-wise.
{
public:
  ClockTime ();

  ClockTime (int hour, int minute, int second, int secondsPerTick);

  ~ClockTime ()
  { hour_ = minute_ = second_ = secondsPerTick_ = startTime_ = 0; }

  int const hour () const { return hour_; }
  int const minute () const { return minute_; }
  int const second () const { return second_; }
  int const secondsPerTick () const { return secondsPerTick_; }

  unsigned int startTime () const { return startTime_; }
  unsigned int deltaTime () const { return deltaTime_; }

  void setTime (ClockTime const& initialTime)
  {
    hour_ = initialTime.hour_;
    minute_ = initialTime.minute_;
    second_ = initialTime.second_;
    secondsPerTick_ = initialTime.secondsPerTick_;
    deltaTime_ = 0;
  }

  void setTime (int hour, int minute, int second, int secondsPerTick)
  {
    hour_ = hour;
    minute_ = minute;
    second_ = second;
    secondsPerTick_ = secondsPerTick;
    deltaTime_ = 0;
  }

  void reset ();

  void increment ();

  void display () const;

private:
  int hour_;
  int minute_;
  int second_;
  int secondsPerTick_;
  unsigned int startTime_;
  unsigned int deltaTime_;

  void recordStartTime ();
};

//0 
class Clock{
protected:
  ClockTime _clockTime;
  double _driftPerSecond;
  double _totalDrift;
public:
  Clock(int hour, int minute, int second, double driftPerSecond);
  void reset();
  void tick();
  virtual void displayTime() = 0;
};

class NaturalClock : public Clock{
public:
  NaturalClock(int hour, int minute, int second, double driftPerSecond);
  virtual void displayTime() = 0;
};

class MechanicalClock : public Clock{
public:
  MechanicalClock(int hour, int minute, int second, double driftPerSecond);
  virtual void displayTime() = 0;
};

class DigitalClock : public Clock{
public:
  DigitalClock(int hour, int minute, int second, double driftPerSecond);
  virtual void displayTime() = 0;
};

class QuantumClock : public Clock{
public:
  QuantumClock(int hour, int minute, int second, double driftPerSecond);
  virtual void displayTime() = 0;
};

//second_level

class SundialClock : public NaturalClock{
public:
  SundialClock(int hour, int minute, int second);
  virtual void displayTime();
};

class CuckooClock : public MechanicalClock{
public:
  CuckooClock(int hour, int minute, int second);
  virtual void displayTime();
};

class GrandFatherClock : public MechanicalClock{
public:
  GrandFatherClock(int hour, int minute, int second);
  virtual void displayTime();
};

class WristClock : public DigitalClock{
public:
  WristClock(int hour, int minute, int second);
  virtual void displayTime();
};

class AtomicClock : public QuantumClock{
public:
  AtomicClock(int hour, int minute, int second);
  virtual void displayTime();
};

#endif  // CLOCK_TIME_H
