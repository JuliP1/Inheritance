#ifndef Vehicle_H
#define Vehicle_H

#include <string>
#include <iostream>
using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int year;
public:
	//constructors
	Vehicle();
	Vehicle(string, int);
};
#endif