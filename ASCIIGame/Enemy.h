#pragma once
class Enemy
{
public:
	Enemy(int health, int attackDamage, int dexterity);
	int getHealth();
	int isDead();
	int attackDamage();
	void die();

private:
	int _health;
	int _attackDamage;
	char _enemySymbol;
	bool _isDead;
	int _dexterity;
};

