#pragma once
#include <string>

class Door
{
public:
	Door(int x, int y, std::string nextLevel, int doorID);
	int getX();
	int getY();
	int getDoorID();
	std::string getNextLevel();

private:
	int _xPos;
	int _yPos;
	int _doorID;
	std::string _nextLevel;
};

