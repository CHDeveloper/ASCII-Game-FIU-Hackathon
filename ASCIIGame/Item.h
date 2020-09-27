#pragma once
#include <unordered_map>
using namespace std;

class Item
{
public:
	Item(string itemName, int defenseMultiplier, int xPos, int yPos);

	unordered_map<string, int> getItem(); // Return the unordered map

	// Getters for the attributes
	int getAttackDamage();
	int getValue();
	int defenseMultiplier();

	// Setters for the attributes
	void setAttackDamage(int newAttackDamage);
	void setValue(int newValue);
	void setDefenseMultiplier(int newDefenseMultiplier);

	// Position Getter
	int getXPos();
	int getYPos();
	

	// Position Setter
	void setXPos(int newXPos);

	void setYPos(int newYPos);

private:

	// Attributes of the item
	string _itemName;
	int _attackDamage;  // Damage item does
	int _value;  // Value of the item
	int _defenseMultiplier; // Items can provide defense
	int _xPos; // X position of the item
	int _yPos; // Y position of the item
};

