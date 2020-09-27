#include "Item.h"

Item::Item(string itemName, int defenseMultiplier, int xPos, int yPos) {
	_itemName = itemName;
	_defenseMultiplier = defenseMultiplier;
	_xPos = xPos;
	_yPos = yPos;
}

// Getters for the attributes
int Item::getAttackDamage() {
	return _attackDamage;
}

int Item::getValue() {
	return _value;
}

int Item::defenseMultiplier() {
	return _defenseMultiplier;
}

// Setters for the attributes
void Item::setAttackDamage(int newAttackDamage) {
	_attackDamage = newAttackDamage;
}

void Item::setValue(int newValue) {
	_value = newValue;
}

void Item::setDefenseMultiplier(int newDefenseMultiplier) {
	_defenseMultiplier = newDefenseMultiplier;
}


// Position Getter
int Item::getXPos() {
	return _xPos;
}

int Item::getYPos() {
	return _yPos;
}

// Position Setter
void Item::setXPos(int newXPos) {
	_xPos = newXPos;
}

void Item::setYPos(int newYPos) {
	_yPos = newYPos;
}