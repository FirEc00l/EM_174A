/*
	EM_174A.h --- EM-174A driver library for Arduino

	Written by Salvatore Giammanco.
	Released into the public domain.

	v 1.0.1
*/

#ifndef EM_174A_H
#define EM_174A_H

#include <Arduino.h>

class EM_174A
{
	public:
		EM_174A(int currentLimitPin, int speedPin, int directionPin);
		void setCurrentLimit(int currentLimit);
		void setSpeed(int speed);
		void setDirection(bool direction);
		void start();
		void stop();

	private:
		int _currentLimitPin;
		int _speedPin;
		int _directionPin;

		int _currentLimit;
		int _speed;
		int _direction;

		bool _active;
		
		void _update(int currentLimit, int speed, bool direction);
};

#endif
