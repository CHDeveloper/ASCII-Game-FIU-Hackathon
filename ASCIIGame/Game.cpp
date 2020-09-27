#include "Game.h"


void Game::play() {
	showTitleScreen();
	initNewLevel("Level1.txt", 0);
	while (true) {
		std::cout << std::string(100, '\n');
		_level.showLevel();
		char input;
		input = _getch();
		char result = _level.movePlayer(input, _player);
		if (result >= '0' && result <= '9') {
			Door door = _level.getDoor(result - '0');
			initNewLevel(door.getNextLevel(), door.getConnectingDoor());
		}
	}
}

void Game::initNewLevel(std::string levelName, int enteringDoor) {
	std::ifstream levelFile;
	levelFile.open(levelName);

	if (levelFile.fail()) {
		perror(levelName.c_str());
		return;
	}
	_level.init(levelFile, _player, enteringDoor);
}

void Game::showTitleScreen() {
	std::cout << " _____ _ __ ___    __    _   _   __ ___"
		<< std::endl << "/_  _//// // _/  ,'_/  .' \ / \\,' // _/"
		<< std::endl << " / / / ` // _/  / /_n / o // \\,' // _/ "
		<< std::endl << "/_/ /_n_//___/  |__,'/_n_//_/ /_//___/ " << std::endl;

	std::cout << "Because we couldn't think of a better title\n\n";
	system("PAUSE");
}