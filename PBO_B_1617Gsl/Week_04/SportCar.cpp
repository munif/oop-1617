#include "SportCar.h"



SportCar::SportCar()
{
	cout << "Calling SportCar() constructor." << endl;
}


SportCar::SportCar(string color)
{
	cout << "Setting color from SuperCar constructor." << endl;
	this->color = color;
}

SportCar::SportCar(string color, string licenseNumber) : Car(color)
{
	cout << "Calling SportCar(string, string) constructor" << endl;
	//this->color = color;
	this->licenseNumber = licenseNumber;
}

SportCar::~SportCar()
{
	cout << "Destructing SportCar()" << endl;
}
