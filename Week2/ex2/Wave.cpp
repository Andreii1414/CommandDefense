#include "Wave.h"

void Wave::SetName(char newName[50])
{
	strcpy(this->name, newName);
}

char Wave::GetName()
{
	return this->name;
}

void Wave::SetNumberOfEnemies(unsigned int value)
{
	this->numberOfEnemies = value;
}

unsigned int Wave::GetNumberOfEnemies()
{
	return this->numberOfEnemies;
}

void Wave::SetInitialHealth(unsigned int value)
{
	this->initialHealth = value;
}

unsigned int Wave::GetInitialHealth()
{
	return this->initialHealth;
}

void Wave::SetMoneyPerEnemy(float value)
{
	this->moneyPerEnemy = value;
}

float Wave::GetMoneyPerEnemy()
{
	return this->moneyPerEnemy;
}