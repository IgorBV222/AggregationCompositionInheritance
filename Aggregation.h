#pragma once
#include <iostream>

class Motor {
public:
    Motor(int power);
    int getPower();   

private:
    int _power = 300;
};

class Car
{
public:
    Car(Motor& p);   
    int getPower();
    
private:
    Motor _p;
};