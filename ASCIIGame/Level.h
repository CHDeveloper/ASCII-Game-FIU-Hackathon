#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

#include "Player.h"
#include "Door.h"
#include "Enemy.h"
#include "Item.h"

using LevelTile = std::vector<std::string>;

enum class levelUpdate {
	enteringNewLevel = 1,
};

class Level
{
public:
	void init(std::ifstream& inFile, Player& player, int enteringDoor);
	void showLevel();
	char movePlayer(char input, Player& player);
	char getTile(int x, int y);
	void setTile(int x, int y, char tile);
	Door getDoor(int index);

	// Randomize level
	void randomizeEnemy();
	void randomizeItem();
	
private:
	LevelTile _level;
	std::vector<Door> _doors;

	// Enemy Variables
	std::vector<Enemy> _enemyList;
	Enemy _randomEnemy;

	// Item Variables
	std::vector<Item> _itemList;

	// Randomize level
	char Enemy;
	char Item;
};

