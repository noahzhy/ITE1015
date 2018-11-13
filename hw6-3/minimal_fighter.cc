#include <iostream>
#include <string>

#include "minimal_fighter.h"

using namespace std;

MinimalFighter::MinimalFighter() {
	this->mHp = 0;
	this->mPower = 0;
	this->mStatus = Invalid;
}
MinimalFighter::MinimalFighter(int _hp, int _power) {
	this->mHp = _hp;
	this->mPower = _power;
	this->mStatus = Alive;
}

int MinimalFighter::hp() const {
	return this->mHp;
}
int MinimalFighter::power() const {
	return this->mPower;
}
FighterStatus MinimalFighter::status() const {
	return this->mStatus;
}

void MinimalFighter::setHp(int _hp) {
	this->mHp = _hp;
	if (this->mHp <= 0) {
		this->mStatus = Dead;
	}
}

void MinimalFighter::hit(MinimalFighter *_enemy) {
	_enemy->setHp(_enemy->hp() - this->power());
	this->setHp(this->hp() - _enemy->power());
	
}

void MinimalFighter::attack(MinimalFighter *_target) {
	_target->setHp(_target->hp() - this->power());
	this->mPower = 0;
}

void MinimalFighter::fight(MinimalFighter *_enemy) {
	while (this->hp() > 0 && _enemy->hp() > 0) {
		this->hit(_enemy);
	}
}
