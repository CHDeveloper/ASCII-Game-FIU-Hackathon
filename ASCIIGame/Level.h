#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

#include "Player.h"

using LevelTile = std::vector<std::string>;

class Level
{
public:
	Level();
	void init(std::ifstream& inFile, Player& player);
	void showLevel();
	void movePlayer(char input, Player& player);
	
private:
	LevelTile _level;
};

