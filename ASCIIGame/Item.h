#pragma once
#include <unordered_map>
using namespace std;

class Item
{
public:
	unordered_map<string, int> getItem(); // Return the unordered map

	// Getters for the attributes
	int getAttackDamage();
	int getValue();
	int defenseMultiplier();

	// Setters for the attributes
	void setAttackDamage(int newAttackDamage);
	void setValue(int newValue);
	void setDefenseMultiplier(int newDefenseMultiplier);

private:

	// Attributes of the item
	int _attackDamage;  // Damage item does
	int _value;  // Value of the item
	int _defenseMultiplier; // Items can provide defense
};

