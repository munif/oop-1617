#pragma once
#include <string>

using namespace std;

class Vehicle
{
	
public:
	double maxCapacity;
	double maxSpeed;
	double currentSpeed;	
	string color;

	Vehicle();
	~Vehicle();
};

