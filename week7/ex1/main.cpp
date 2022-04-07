#include <iostream>

float operator"" _Kelvin(unsigned long long int K)
{
	return K - 273.15;
}

float operator"" _Fahrenheit(unsigned long long int F)
{
	return ((F - 32) * 5.0) / 9.0;
}

int main()
{
	float a = 300_Kelvin;
	std::cout << a << std::endl;
	float b = 120_Fahrenheit;
	std::cout << b << std::endl;
}