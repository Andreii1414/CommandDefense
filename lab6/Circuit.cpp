#include "Circuit.h"
#include <iostream>
void Circuit::SetLength(int alength)
{
	length = alength;
}

Circuit::Circuit()
{
	length = 0;
	count = 0;
	max_count = 20;
	w = sunny;
}

void Circuit::SetWeather(Weather w2)
{
	w = w2;
}

bool Circuit::AddCar(Car* car)
{
	if (count < max_count)
	{
		vector[count++] = car;
		return true;
	}
	return false;
}

void Circuit::Race()
{
	Car* x;
		for(int i = 0 ; i < count - 1; i++)
			for (int j = i+1; j < count; j++)
				if (vector[i]->GetAverageSpeed(w) < vector[j]->GetAverageSpeed(w))
				{
					x = vector[i];
					vector[i] = vector[j];
					vector[j] = x;
				}
		for (int i = 0; i < count; i++)
			std::cout << i + 1 << ". " << vector[i]->GetName()<<std::endl;
		//n-am avut timp sa implementez altfel functia asta, si nici celelalte doua functii

}