#include "Vehicle.h"



Vehicle::Vehicle()
{
	cout << "Calling Vehicle() constructor" << endl;
	this->currentSpeed = 10;
}

Vehicle::Vehicle(string color)
{
	cout << "Calling Vehicle(string) from Vehicle." << endl;
	this->color = color;
}


Vehicle::~Vehicle()
{
	cout << "Destructing Vehicle()" << endl;
}
