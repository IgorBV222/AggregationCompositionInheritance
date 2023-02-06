#include "Aggregation.h"

Motor::Motor(int power) : _power(power){}
int Motor::getPower() {
	return _power;
}

Car::Car(Motor& p) : _p(p) {}
int Car:: getPower() { 
	return _p.getPower();   
}