#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string name)
{
    type = name;
};

Weapon::~Weapon() {};

std::string Weapon::getType() { return (type); };

void Weapon::setType(std::string newType) { type = newType; };  