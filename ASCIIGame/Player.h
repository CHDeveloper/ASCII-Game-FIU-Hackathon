#pragma once
class Player
{
public:
	void setPos(int x, int y);
	int getX();
	int getY();
	void getPos(int& x, int& y);

private:
	int _xPos;
	int _yPos;
};

