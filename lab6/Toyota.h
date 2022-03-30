#pragma once
#include "Car.h"

class Toyota : public Car
{
public:
	Toyota() : Car(65, 9, "Toyota") {};
	int GetFuelCapacity();
	int GetFuelConsumption();
	int GetAverageSpeed(Weather w);
	const char* GetName();
};