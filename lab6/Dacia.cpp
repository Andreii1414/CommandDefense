#include "Dacia.h"

int Dacia::GetFuelCapacity()
{
	return fuelCapacity;
}

int Dacia::GetFuelConsumption()
{
	return fuelConsumption;
}

int Dacia::GetAverageSpeed(Weather w)
{
	if (w == 1) return 55;
	if (w == 2) return 95;
	return 35;
}

const char* Dacia::GetName()
{
	return name;
}
