#pragma once

#include <string.h>

class Wave
{
private:
	char name[50];
	unsigned int numberOfEnemies;
	unsigned int initialHealth;
	float moneyPerEnemy;

public:

	void SetName(char newName[50]); 
	char GetName();  

	void SetNumberOfEnemies(unsigned int value);
	unsigned int GetNumberOfEnemies(); 

	void SetInitialHealth(unsigned int value);  
	unsigned int GetInitialHealth(); 

	void SetMoneyPerEnemy(float value);
	float GetMoneyPerEnemy();

};
