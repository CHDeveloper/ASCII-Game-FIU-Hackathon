#pragma once
#include <string>
#include <vector>

#include "Door.h"

class Door
{
public:
	Door(int x, int y, std::string nextLevel, int doorID, int connectingDoor);
	int getX();
	int getY();
	int getDoorID();
	std::string getNextLevel();
	int getConnectingDoor();

private:
	int _xPos;
	int _yPos;
	int _doorID;
	int _connectingDoor;
	std::string _nextLevel;
};

