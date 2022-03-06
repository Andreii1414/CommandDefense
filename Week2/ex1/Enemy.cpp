#include "Enemy.h"
#include <iostream>
#include "EnemiesStructures.h"

void Enemy::Init(Point initialLocation, int initialHealth)
{
	health = initialHealth;
	location = initialLocation;
}

void Enemy::move(EnemyDirection direction, int step)
{
	switch(direction)
		case EnemyDirection::UpDirection:
			this->location.y -= step;
			break;
		case EnemyDirection::DownDirection:
			this->location.y += step;
			break;
		case EnemyDirection::LeftDirection:
			this->location.x -= step;
			break;
		case EnemyDirection::RightDirection:
			this->location.x += step;
			break;
}

bool Enemy::isDead()
{
	if (health <= 0)
		return true;
	return false;
}

void Enemy::Shoot(int damage)
{
	health -= damage;
}