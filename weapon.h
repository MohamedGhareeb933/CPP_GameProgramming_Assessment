#pragma once

#include <string>
#include "items.h"

// weapon inherits from items 
// every weapon will be pushed in the inventory list will be of type items 

// we can create another type of items ex trash or armor 
class weapon :public items {

private:
	std::string weaponName;
	std::string weaponType;

public:
	// getter 
	virtual std::string name();
	virtual std::string type();

	// weapon setter
	weapon(std::string, std::string);
};

