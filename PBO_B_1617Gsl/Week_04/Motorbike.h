#pragma once
#include "Engine.h"
#include "Bike.h"

class Motorbike : Bike 
{
public:
	Engine engine;
	Motorbike();
	~Motorbike();
	void fungsi1();
};

