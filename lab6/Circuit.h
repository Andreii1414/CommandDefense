#pragma once
#include "Car.h"

class Circuit
{
	int length;
	int count;
	int max_count;
	Car* vector[20];
	Weather w;
public:
	Circuit();
	void SetLength(int alength);
	void SetWeather(Weather w2);
	bool AddCar(Car* car);
	void Race();
};