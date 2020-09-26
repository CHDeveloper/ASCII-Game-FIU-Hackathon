#include "Container.h"
#include <unordered_map>

void Container::addItem(string itemName, int itemQuant) {
	
	unordered_map<string, int>::iterator it; // Iterator for the map

	//it = _umap.find(itemName); // Try to find the item

	// If key is found
	if (_umap.find(itemName) != _umap.end()) {
		
		int currQuant = _umap.at(itemName); // Get the current quantity at the key
		_umap[itemName] = (currQuant + itemQuant); // Add the current quantity and the new quantity
	
	}
	// If the key isn't found
	else {

		_umap.insert(make_pair(itemName, itemQuant));  // Insert into unordered map
	}
}

void Container::removeItem(string itemName, int itemQuant) {

	// If key is found
	if (_umap.find(itemName) != _umap.end()) {

		int currQuant = _umap.at(itemName); // Get the current quantity at the key
		int newQuant = (currQuant - itemQuant);  // Subtract the current quantity and the new quantity
		if (newQuant < 0){
			_umap[itemName] = newQuant; // Deafult to 0
		}

		else {
			_umap[itemName] = newQuant; // Set the new quantity
		}

	}
}


unordered_map<string, int> Container::getContainer() {
	return _umap;

}