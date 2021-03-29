#include "weapon.h"

std::string weapon::name()
{
	return weaponName;
}


std::string weapon::type()
{
	return weaponType;
}

weapon::weapon(std::string name, std::string type)
{
	this->weaponName = name;
	this->weaponType = type;
}
