#include "HumanA.hpp"
#include <iostream>

Human_A::Human_A(std::string name, Weapon &weapon) :  _weapon(weapon), _name(name)
{
}

void Human_A::attack()
{
    std::cout<< _name << " attacks with their " << _weapon.getType() << std::endl;
}

Human_A::~Human_A()
{
};

