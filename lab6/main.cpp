#include <iostream>
#include "Circuit.h"
#include "Car.h"
#include "Toyota.h"
#include "Dacia.h"
#include "Mercedes.h"
int main()

{

	Circuit c;

	c.SetLength(100);

	c.SetWeather(Weather::rain);

	c.AddCar(new Dacia());

	c.AddCar(new Toyota());

	c.AddCar(new Mercedes());

	c.Race();
	//c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.

	//c.ShowWhoDidNotFinis(); // it is possible that some cars don't have enough fuel to finish the circuit

	return 0;
}