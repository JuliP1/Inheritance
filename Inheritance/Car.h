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
};
