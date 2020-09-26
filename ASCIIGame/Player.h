#pragma once
class Player
{
public:
	void setPos(int x, int y);
	int getX();
	int getY();
	void getPos(int& x, int& y);

	

	// Player Attribute Getters
	int getHealth();
	int getStrength();
	int getStamina();
	int getCurrentLevel();
	int getDexterity();

	// Player Attribute Setters

private:
	int _xPos;
	int _yPos;

	// Player Attributes
	int _health;
	int _strength; // Increases damage dealt
	int _stamina; // How many spaces the player moves before becoming fatigued and frozen in place temporarily?
	int _dexterity; // Increases chance of hitting and chance of dodging
	int _currLevel; // Appeneded to find the file
};

