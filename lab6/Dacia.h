#pragma once
#include "Car.h"

class Dacia : public Car
{
public:
	Dacia() : Car(60, 6, "Dacia") {};
	int GetFuelCapacity();
	int GetFuelConsumption();
	int GetAverageSpeed(Weather w);
	const char* GetName();
};