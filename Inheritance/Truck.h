#ifndef VEHICLE_H
#define VEHICLE_H
#include "Vehicle.h"
#include <iostream>
using namespace std;

class Truck : public Vehicle
{
private:
	int towingCapacity;
public:
	Truck();
	Truck(int);
	void setCapacity(int);
	int getCapacity();
	void displayInfo();
};
#endif