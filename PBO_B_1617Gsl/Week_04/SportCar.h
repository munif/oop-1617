#pragma once
#include "NitroEngine.h"
#include "Engine.h"
#include "Wheel.h"
#include <string>
#include "Car.h"
using namespace std;

// Derived class
class SportCar : public Car
{
public:

	NitroEngine nitroEngine;
	SportCar();
	~SportCar();
};

