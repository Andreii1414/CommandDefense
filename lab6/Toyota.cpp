#include "Toyota.h"

int Toyota::GetFuelCapacity()
{
	return fuelCapacity;
}

int Toyota::GetFuelConsumption()
{
	return fuelConsumption;
}

int Toyota::GetAverageSpeed(Weather w)
{
	if (w == 1) return 75;
	if (w == 2) return 110;
	return 60;
}

const char* Toyota::GetName()
{
	return name;
}
