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
	//input data for vehicle
	Vehicle vehicle(manufacturer, year);
	//call vehicle display info function
	cout << endl << "Vehicle Information" << endl;
	vehicle.displayInfo(); 
	
	cout << "Input car manufacturer: ";
	cin >> manufacturer;
	cout << "Input car year: ";
	cin >> year;
	cout << "Input amount of car doors: ";
	cin >> doors;
	//input data for car
	Car car(doors);
	car.setManufacturer(manufacturer);
	car.setYear(year);
	//display car info
	cout << endl << "Car Information" << endl;
	car.displayInfo();



}

