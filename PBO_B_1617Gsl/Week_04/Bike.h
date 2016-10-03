#pragma once
#include "Wheel.h"
#include "Vehicle.h"

class Bike : public Vehicle
{
public:
	Wheel wheel[2];

private:
	int cadence;

public:
	Bike();
	~Bike();
	void accelerate(double speed);
	void decelerate(double speed);
};

