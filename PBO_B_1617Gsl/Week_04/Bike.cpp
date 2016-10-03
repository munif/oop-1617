#include "Bike.h"



Bike::Bike()
{
	
}


Bike::~Bike()
{
}

void Bike::accelerate(double speed)
{
	this->currentSpeed += speed;
}

void Bike::decelerate(double speed)
{
	this->currentSpeed -= speed;
}
