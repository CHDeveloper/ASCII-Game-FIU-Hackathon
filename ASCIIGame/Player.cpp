#include "Player.h"
void Player::setPos(int x, int y) {
	_xPos = x;
	_yPos = y;
}

int Player::getX() {
	return _xPos;
}

int Player::getY() {
	return _yPos;
}

void Player::getPos(int& x, int& y) {
	x = _xPos;
	y = _yPos;
}

// Player Attribute Getters
int Player::getHealth() {
	return _health;
}

int Player::getStrength() {
	return _strength;

}

int Player::getStamina() {
	return _stamina;
}

int Player::getCurrentLevel() {
	return _currLevel;
}

int Player::getDexterity() {
	return _dexterity;
}

int Player::getAttackDamage() {
	return _attackDmg;
}

bool Player::isFatigued() {
	return _isFatigued;
}

Container Player::getInventory() {
	return _inventory;

}


// Player Attribute Setters
void Player::setHealth(int newHealth) {
	_health = newHealth;
}

void Player::setStrength(int newStrength) {
	_strength = newStrength;
}

void Player::setStamina(int newStamina) {
	_stamina = newStamina;
}

void Player::setCurrentLevel(int newLevel) {
	_currLevel = newLevel;
}

void Player::setDexterity(int newDexterity) {
	_dexterity = newDexterity;
}

void Player::setAttackDamage(int newAttackDmg) {
	_attackDmg = newAttackDmg;
}

void Player::setFatigued(bool changeFatigued) {
	_isFatigued = changeFatigued;
}



