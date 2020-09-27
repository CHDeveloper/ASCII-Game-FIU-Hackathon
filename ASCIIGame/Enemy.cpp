#include "Enemy.h"

Enemy::Enemy(int health, int attackDamage, int dexterity, int xPos, int yPos) {
	_health = health;
	_attackDamage = attackDamage;
	_dexterity = dexterity;
	_xPos = xPos;
	_yPos = yPos;
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


// New additions

void Enemy::attack(Player player) {
	player.setHealth(player.getHealth() - _attackDamage); // Get the player health and subtract from enemy attack damage
}

// Position Getter
int Enemy::getXPos() {
	return _xPos;
}

int Enemy::getYPos() {
	return _yPos;
}

// Position Setter
void Enemy::setXPos(int newXPos) {
	_xPos = newXPos;
}

void Enemy::setYPos(int newYPos) {
	_yPos = newYPos;
}