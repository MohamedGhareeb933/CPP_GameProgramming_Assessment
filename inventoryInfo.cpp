#include "inventoryInfo.h"

void inventoryInfo::pushIntoInventory(items * items)
{
	itemsContainer.push_back(items);
}

void inventoryInfo::popFromInventory(int index)
{
	itemsContainer.erase(inventoryBegin() + index);
}

items * inventoryInfo::returnFromInventory(int index)
{
	return itemsContainer[index];
}

bool inventoryInfo::isEmpty()
{
	return (inventorySize() == 0);
}

std::vector<items *>::iterator inventoryInfo::inventoryBegin()
{
	return itemsContainer.begin();
}

std::vector<items *>::iterator inventoryInfo::inventoryEnd()
{
	return itemsContainer.end();
}

int inventoryInfo::inventorySize()
{
	return itemsContainer.size();
}
