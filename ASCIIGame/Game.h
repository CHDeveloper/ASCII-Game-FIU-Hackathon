#pragma once
#include <iostream>
#include <fstream>
#include <conio.h>

#include "Level.h"
#include "Player.h"
#include "Door.h"

class Game
{
private:
	Level _level;
	Player _player;

public:
	void play();
	void initNewLevel(std::string levelName);
	int getCurrentPlayerLevel();
};

