#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck()
{
	towingCapacity = 0;
}

Truck::Truck(int x)
{
	towingCapacity = x;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towingCapacity << endl;
}
