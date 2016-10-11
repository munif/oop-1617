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
	
	// Default constructor
	Vehicle();

	// Overloading dari default constructor
	Vehicle(string color);
	
	void accelerate(double speed);
	void accelerate(double speed, double direction);
	~Vehicle();
};

