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

void Vehicle::setManufacturer(string x)
{
	manufacturer = x;
}

void Vehicle::setYear(int x)
{
	year = x;
}

string Vehicle::getManufacturer()
{
	return manufacturer;
}

int Vehicle::getYear()
{
	return year;
}
