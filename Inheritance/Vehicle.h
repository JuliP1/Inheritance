#ifndef Vehicle_H
#define Vehicle_H
#include <string>
#include <iostream>
using namespace std;

class Vehicle
{
private:
	//declare variables
	string manufacturer;
	int year;
public:
	//constructors
	Vehicle();
	Vehicle(string, int);
	//member functions
	void setManufacturer(string);
	void setYear(int);
	string getManufacturer();
	int getYear();
	void displayInfo();
};
#endif