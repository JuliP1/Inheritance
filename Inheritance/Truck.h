#ifndef Vehicle_H
#define Vehicle_H
class Truck : public Vehicle
{
private:
	int towingCapacity;
private:
	Truck(int);
	void displayInfo();
};
#endif