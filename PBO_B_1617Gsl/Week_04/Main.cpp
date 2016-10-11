#include <iostream>
#include <string>
#include "Car.h"
#include "SportCar.h"
#include "Engine.h"
#include "NitroEngine.h"
#include "Bike.h"

using namespace std;

int main()
{
	/*
	cout << "Object 1:" << endl;
	Car c1;
	cout << endl;

	cout << "Object 2:" << endl;
	SportCar sc1;
	cout << endl;

	cout << "Object 3:" << endl;
	SportCar sc2("Red", "L 1234 AB");
	cout << sc2.color << endl;
	cout << sc2.licenseNumber << endl;
	cout << endl;

	cout << "Object 4:" << endl;
	SportCar *sc3 = new SportCar("Black", "L 2222 XY");
	// Urutan: SportCar, Car, Vehicle
	delete sc3;
	*/
	cout << "Object 1: " << endl;
	Car ca;
	ca.move(10);
	cout << endl;

	cout << "Object 2: " << endl;
	SportCar sca;
	sca.move(20);
	cout << endl;

	cout << "Object 3: " << endl;
	Car *cb = &sca;
	cb->move(20);

	system("pause");
	
}