#pragma once
#include <unordered_map>
using namespace std;

class Container
{

public:

	void addItem(string itemName, int itemQuant); // Add item to the map
	void removeItem(string itemName, int itemQuant); // Remove item from the map
	unordered_map<string, int> getContainer(); // Return the unordered map


private:
	unordered_map<string, int> _umap; // Map for the items
};

