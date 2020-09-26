#include "Player.h"
void Player::setPos(int x, int y) {
	_xPos = x;
	_yPos = y;
}

int Player::getX() {
	return _xPos;
}

int Player::getY() {
	return _yPos;
}

void Player::getPos(int& x, int& y) {
	x = _xPos;
	y = _yPos;
}