#pragma once
#include "Player.h"
class Enemy
{
public:
	Enemy(int health, int attackDamage, int dexterity, int xPos, int yPos);
	int getHealth();
	int isDead();
	int attackDamage();
	void die();
	
	// Combat System
	void attack(Player player);

	// Position Getter
	int getXPos();
	int getYPos();

	// Position Setter
	void setXPos(int newXPos);
	void setYPos(int newYPos);

private:
	int _health;
	int _attackDamage;
	char _enemySymbol = '%';
	bool _isDead = false;
	int _dexterity;
	

	// Position System
	int _xPos;
	int _yPos;
};

