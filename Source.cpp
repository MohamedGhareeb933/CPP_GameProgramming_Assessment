#include <iostream>
#include <string>

#include "weapon.h"
#include "inventoryInfo.h"

int main() {

	// create a new item
	items* iceWeapon = new weapon("ice weapon", "unique");
	items* dragonWeapon = new weapon("dragon Weapon", "ultimate");

	// push the item into inventory 
	inventoryInfo inventory;
	inventory.pushIntoInventory(iceWeapon);
	inventory.pushIntoInventory(dragonWeapon);


	// loop through all the items in the inventory and output 
	// the weapon name and weapon type
	for (auto index = inventory.inventoryBegin(); index != inventory.inventoryEnd(); index++) {
		std::cout << "weapon name is " << (*index)->name() << " ----- weapon type: " << (*index)->type() << std::endl;
	}

	delete iceWeapon;
	delete dragonWeapon;


	return 0;
}