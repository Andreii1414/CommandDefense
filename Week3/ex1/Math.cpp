#include "Math.h"
#include <stdarg.h>
#include <cstdio>
#include <cstring>

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return a * b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

int Math::Add(int count, ...)
{
	int sum = 0;
	va_list list;
	va_start(list, count);
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return sum;
}

char* Math::Add(const char* s1, const char* s2)
{
	const char* name = new char[strlen(s1) + strlen(s2) + 1];
	if (s1 == nullptr || s2 == nullptr)
		return nullptr;
	strcpy((char*)name, s1);
	strcat((char*)name, s2);
	return (char*)name;
}

