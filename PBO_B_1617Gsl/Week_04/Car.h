#pragma once
#include "Wheel.h"
#include "Engine.h"

// Base class
class Car
{
public:
	double maxCapacity;
	double maxSpeed;
	string color;
	Engine engine;
	Wheel wheel[4];
	string licenseNumber;
	Car();
	~Car();
};

