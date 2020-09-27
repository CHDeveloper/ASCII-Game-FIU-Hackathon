#pragma once
#include "Container.h"
class Player
{
public:
	void setPos(int x, int y);
	int getX();
	int getY();

	

	// Player Attribute Getters
	int getHealth();
	int getStrength();
	int getStamina();
	int getCurrentLevel();
	int getDexterity();
	int getAttackDamage();
	bool isFatigued();
	Container getInventory();
	

	// Player Attribute Setters
	void setHealth(int newHealth);
	void setStrength(int newStrength);
	void setStamina(int newStamina);
	void setCurrentLevel(int newLevel);
	void setDexterity(int newDexterity);
	void setAttackDamage(int newAttackDmg);
	void setFatigued(bool changeFatigued);

private:
	int _xPos;
	int _yPos;

	// Player Attributes
	int _health;
	int _strength; // Increases damage dealt
	int _stamina; // How many spaces the player moves before becoming fatigued and frozen in place temporarily?
	int _dexterity; // Increases chance of hitting and chance of dodging
	int _currLevel; // Appeneded to find the file
	int _attackDmg; // Damage player deals to enemy
	bool _isFatigued; // Check if the player's stamina is at 0
	Container _inventory; // Inventory of the player

	

	// Disscuss implementation of
	// * Dodge chance via dexterity
	// * Increased damage via strength

};

