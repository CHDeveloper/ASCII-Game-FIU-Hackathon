#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

#include "Player.h"
#include "Door.h"

using LevelTile = std::vector<std::string>;

enum class levelUpdate {
	enteringNewLevel = 1,
};

class Level
{
public:
	void init(std::ifstream& inFile, Player& player);
	void showLevel();
	void movePlayer(char input, Player& player);
	char getTile(int x, int y);
	void setTile(int x, int y, char tile);

private:
	LevelTile _level;
};

