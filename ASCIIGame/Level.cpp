#include "Level.h"
Level::Level() {

}

void Level::init(std::ifstream& inFile) {
	std::string input;
	// add lines to vector until EOF
	while (getline(inFile, input)) {
		_level.push_back(input);
	}
}

void Level::showLevel() {
	for (std::string s : _level) {
		std::cout << s << "\n";
	}
}