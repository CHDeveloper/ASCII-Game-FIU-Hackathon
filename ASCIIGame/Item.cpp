#include "Item.h"

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