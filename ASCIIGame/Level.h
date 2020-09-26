#pragma once
#include <fstream>
#include <iostream>
#include <vector>


using LevelTile = std::vector<std::vector<char>>;

class Level
{
public:
	Level();
	~Level();
	void init(std::ifstream inFile);
	
private:
	LevelTile level;
};

