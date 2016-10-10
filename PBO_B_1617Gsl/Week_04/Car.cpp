#include "Car.h"



Car::Car()
{
	cout << "Calling Car() constructor" << endl;
	this->maxCapacity = 20;
}

Car::Car(string color) : Vehicle(color)
{
	cout << "Calling Car(string) from Car." << endl;
	this->color = color;
}


Car::~Car()
{
	cout << "Destructing Car()" << endl;
}
