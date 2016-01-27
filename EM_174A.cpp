/*
	EM_174A.cpp --- EM-174A driver library for Arduino

	Written by Salvatore Giammanco.
	Released into the public domain.

	v 1.0.1
*/

#include <Arduino.h>
#include "EM_174A.h"


EM_174A::EM_174A(int currentLimitPin, int speedPin, int directionPin){
	_currentLimitPin = currentLimitPin;
	_speedPin = speedPin;
	_directionPin = directionPin;
	_active = false;
}

void EM_174A::start(){
	_update(_currentLimit, _speed, _direction);
	_active = true;
}

void EM_174A::stop(){
	_update(0, 0, false);
	_active = true;
}

void EM_174A::setCurrentLimit(int currentLimit){
	_currentLimit = currentLimit;

	if(_active){
		analogWrite(_currentLimitPin, currentLimit);
	}
}

void EM_174A::setSpeed(int speed){
	_speed = speed;

	if(_active){
		analogWrite(_speedPin, speed);
	}
}

void EM_174A::setDirection(bool direction){
	_direction = direction;

	if(_active){
		digitalWrite(_directionPin, direction);
	}
}

void EM_174A::_update(int currentLimit, int speed, bool direction){
	analogWrite(_currentLimitPin, currentLimit);
	analogWrite(_speedPin, speed);
	digitalWrite(_directionPin, direction);
}
