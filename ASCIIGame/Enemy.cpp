#include "Enemy.h"

Enemy::Enemy(int health, int attackDamage, int dexterity) {
	_health = health;
	_attackDamage = attackDamage;
	_dexterity = dexterity;
}

int Enemy::getHealth() {
	return _health;
}

int Enemy::isDead() {
	return _isDead;
}

int Enemy::attackDamage() {
	return _attackDamage;
}

void Enemy::die() {
	_isDead = true;
}
