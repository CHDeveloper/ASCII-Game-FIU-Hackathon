#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include <string>


using LevelTile = std::vector<std::string>;

class Level
{
public:
	Level();
	void init(std::ifstream& inFile);
	void showLevel();
	
private:
	LevelTile _level;
};

