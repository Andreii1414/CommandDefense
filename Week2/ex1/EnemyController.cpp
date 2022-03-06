#include "EnemyController.h"
#include "Enemy.h" // to actualy use the field Enemy declared in the header by forward declaration, we use the field here

void EnemyController::Init(int maximumEnemies, int step, Point initialLocation)
{
    this->enemies_spawned = 0;
    enemies = new Enemy[maximumEnemies];

    for (int i = 0; i < maximumEnemies; i++)
    {
        enemies[i].Init(initialLocation, ENEMY_HEALTH);
        this->stepSize = step;
    }
}

void EnemyController::Uninit()
{
	delete enemies;
}

void EnemyController::Move(EnemyDirection direction)
{
   for (int i = 0; i < enemies_spawned; i++)
       enemies[i].Move(direction, this->stepSize);
}

void EnemyController::DamageAll()
{
    for (int i = 0; i < enemies_spawned; i++)
        enemies[i].Shoot(i + 1);
}

int EnemyController::CountKilledEnemies()
{
    int cnt = 0;
    for (i = 0; i < enemiesSpawned; i++)
        if (enemies[i].isDead())
            cnt++;
    return cnt;
}

bool EnemyController::SpawnEnemy()
{
    if (enemiesSpawned > MAX_ENEMIES)
        return false;
    enemiesSpawned++;
}