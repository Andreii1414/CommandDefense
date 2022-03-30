#pragma once
#include "Car.h"

class Mercedes : public Car
{
public:
	Mercedes (): Car(68, 12, "Mercedes") {};
	int GetFuelCapacity();
	int GetFuelConsumption();
	int GetAverageSpeed(Weather w);
	const char* GetName();
}; 
