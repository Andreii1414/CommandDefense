#include "Global.h"

int CompareByMoney(Wave* wave1, Wave* wave2)
{
	if (wave1->GetMoneyPerEnemy() == wave2->GetMoneyPerEnemy())
		return 0;
	if (wave1->GetMoneyPerEnemy() > wave2->GetMoneyPerEnemy())
		return 1;
	return -1;
}

int CompareByEnemies(Wave* wave1, Wave* wave2)
{
	if (wave1->GetNumberOfEnemies() == wave2->GetNumberOfEnemies())
		return 0;
	if (wave1->GetNumberOfEnemies() > wave2->GetNumberOfEnemies())
		return 1;
	return -1;
}
