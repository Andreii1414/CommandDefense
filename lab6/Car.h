#pragma once
#include "weather.h"
class Car
{
protected:
	int fuelCapacity, fuelConsumption;
	const char* name;
	Car(int fuelCap, int fuelCon, const char* nume) : fuelCapacity(fuelCap), fuelConsumption(fuelCon),name(nume) {};
public:
	virtual int GetFuelCapacity() = 0;
	virtual int GetFuelConsumption() = 0;
	virtual int GetAverageSpeed(Weather w) = 0;
	virtual const char* GetName() = 0;
};