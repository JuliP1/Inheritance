//Julian Pabon
//CIS 1202.501
//April 26, 2020

//add class files
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
//include libraries
#include <string>
#include <iostream>
using namespace std;

int main()
{
	//declare variables
	string manufacturer;
	int year, doors, towingCapacity;
	cout << "Input vehicle manufacturer: ";
	cin >> manufacturer;
	cout << "Input vehicle year: ";
	cin >> year;
	//input data and class
	Vehicle vehicle(manufacturer, year);
	//call vehicle display info function
	vehicle.displayInfo();
}

