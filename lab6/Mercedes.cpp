#include "Mercedes.h"

int Mercedes::GetFuelCapacity()
{
	return fuelCapacity;
}

int Mercedes::GetFuelConsumption()
{
	return fuelConsumption;
}

int Mercedes::GetAverageSpeed(Weather w)
{
	if (w == 1) return 70;
	if (w == 2) return 120;
	return 50;
}

const char* Mercedes::GetName()
{
	return name;
}
