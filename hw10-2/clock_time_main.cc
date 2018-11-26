#include "clock_time.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int second;
	cin >> second;
	vector <Clock*> clocks_;

	SundialClock *ps = new SundialClock(0, 0, 0);
	CuckooClock *pc = new CuckooClock(0, 0, 0);
	GrandFatherClock *pg = new GrandFatherClock(0, 0, 0);
	WristClock *pw = new WristClock(0, 0, 0);
	AtomicClock *pa = new AtomicClock(0, 0, 0);

	clocks_.push_back(ps);
	clocks_.push_back(pc);
	clocks_.push_back(pg);
	clocks_.push_back(pw);
	clocks_.push_back(pa);

	for (size_t i = 0; i < clocks_.size(); ++i) {
		clocks_[i]->reset();
	}

	cout << "Reported clock times after resetting:" << endl;

	for (size_t i = 0; i < clocks_.size(); ++i) {
		clocks_[i]->displayTime();
	}

	cout << endl << "Running the clocks..." << endl << endl;

	for (size_t i = 0; i < second; ++i) {
		for (size_t i = 0; i < clocks_.size(); ++i) {
			clocks_[i]->tick();
		}
	}
	
	cout << "Reported clock times after running:" << endl;

	for (size_t i = 0; i < clocks_.size(); ++i) {
		clocks_[i]->displayTime();
		delete clocks_[i];
	}
	
	return 0;
}
