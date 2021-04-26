#include "Car.h"
#include <iostream>
using namespace std;

//constructors definition
	Car::Car()
	{
		doors = 0;
	}
	Car::Car(int x)
	{
		doors = x;
	}
//displayInfo function
	void Car::displayInfo()
	{
		Vehicle::displayInfo();
		cout << "Doors: " << doors << endl;
	}
