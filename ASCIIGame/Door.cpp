#include "Door.h"
Door::Door(int x, int y, std::string nextLevel, int doorID, int connectingDoor) {
	_xPos = x;
	_yPos = y;
	_nextLevel = nextLevel;
	_doorID = doorID;
	_connectingDoor = connectingDoor;
}

int Door::getX() {
	return _xPos;
}

int Door::getY() {
	return _yPos;
}

int Door::getDoorID() {
	return _doorID;
}

std::string Door::getNextLevel() {
	return _nextLevel;
}

int Door::getConnectingDoor() {
	return _connectingDoor;
}