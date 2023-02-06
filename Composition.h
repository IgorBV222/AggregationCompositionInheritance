#pragma once
#include <iostream>

class Engine {
public:
    Engine(int power);
    int getPower();    

private:
    int _power = 300;
};

class Motorbike {
public:
    Motorbike(int power);   
    int getPower();
private:
    Engine _engine;
};
