#pragma once
#include "Wheel.h"
#include "Engine.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

// Base class
class Car : public Vehicle
{
public:
	double maxCapacity;
	double maxSpeed;
	string color;
	Engine engine;
	Wheel wheel[4];
	string licenseNumber;
	Car();
	Car(string color);
	~Car();
};

