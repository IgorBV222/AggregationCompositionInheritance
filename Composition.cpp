#include "Composition.h"


Engine::Engine(int power) : _power(power) {}

int Engine::getPower() {
	return _power;
}

Motorbike::Motorbike(int power) : _engine(power) {}

int Motorbike::getPower() {
	return _engine.getPower();
}
