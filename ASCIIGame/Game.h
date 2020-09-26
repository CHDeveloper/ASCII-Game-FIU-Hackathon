#pragma once
#include <iostream>
#include <fstream>
#include <conio.h>

#include "Level.h"
#include "Player.h"

class Game
{
private:
	Level _level;

public:
	void play();
};

