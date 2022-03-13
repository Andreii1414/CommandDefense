#include "Canvas.h"
#include <iostream>

Canvas::Canvas(int width, int height)
{
	columns = width;
	lines = height;
	m = new char*[lines];
	for (int i = 0; i < lines; i++)
	{
		m[i] = new char[columns];
	}
	Clear();
}

void Canvas::Clear()
{
	for (int i = 0; i < lines; i++)
		for (int j = 0; j < columns; j++)
			m[i][j] = ' ';
}

void Canvas::Print()
{
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < columns; j++)
			std::cout << m[i][j];
		std::cout << std::endl;
	}
}

void Canvas::SetPoint(int y, int x, char ch)
{
	m[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	if (x1 == x2)
	{
		for (int i = y1; i <= y2; i++)
			this->SetPoint(x1, i, ch);
		return;
	}
	if (y1 == y2)
	{
		for (int i = x1; i <= x2; i++)
			this->SetPoint(i, y1, ch);
		return;
	}
	int dx, dy, p, x, y;

	dx = x2 - x1;
	dy = y2 - y1;

	x = x1;
	y = y1;

	p = 2 * dy - dx;

	while (x < x2)
	{
		if (p >= 0)
		{
			this->SetPoint(x, y, ch);
			y = y + 1;
			p = p + 2 * dy - 2 * dx;
		}
		else
		{
			this->SetPoint(x, y, ch);
			p = p + 2 * dy;
		}
		x = x + 1;
	}
}


void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	this->DrawLine(left, top, right, top, ch);
	this->DrawLine(left, top, left, bottom, ch);
	this->DrawLine(right, top, right, bottom, ch);
	this->DrawLine(left, bottom, right, bottom, ch);
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left; i <= right; i++)
		for (int j = top; j <= bottom; j++)
			this->SetPoint(i, j, ch);
}
