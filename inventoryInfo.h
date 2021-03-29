#pragma once

#include <vector>
#include <iterator>

#include "items.h"

class inventoryInfo {

private:

	// inventory list and its type of items
	std::vector<items *> itemsContainer;

public:

	// push into list
	void pushIntoInventory(items* items);

	// delete from list 
	// we could also use pop_back but we wants to be specific which item we wants to delete by its index
	void popFromInventory(int index);
	// return or select item by index
	items* returnFromInventory(int index);

	// iterators
	bool isEmpty();
	std::vector<items *>::iterator inventoryBegin();
	std::vector<items *>::iterator inventoryEnd();
	int inventorySize();

};
