#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle()
{
	year = 0;
}

Vehicle::Vehicle(string x, int y)
{
	manufacturer = x;
	year = y;
}

void Vehicle::displayInfo()
{
	cout << "Manufacturer: " << manufacturer;
	cout << "year: " << year;
}