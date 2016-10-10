#pragma once
#include <string>
#include <iostream>

using namespace std;

class Vehicle
{
	
public:
	double maxCapacity;
	double maxSpeed;
	double currentSpeed;	
	string color;

	Vehicle();
	Vehicle(string color);
	~Vehicle();
};

