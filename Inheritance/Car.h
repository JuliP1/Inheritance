#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
private:
	int doors;
public:
	Car();
	Car(int);
	void displayInfo();
	void setDoors(int);
	int getDoors();
};
#endif