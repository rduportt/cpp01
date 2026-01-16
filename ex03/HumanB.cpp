    #include "HumanB.hpp"
#include <iostream>


Human_B::Human_B(std::string name) : weapon(NULL) , name(name)
{
}

void Human_B::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void Human_B::attack()
{
    if (weapon == NULL)
        return ;
    std::cout<< name << " attacks with their " << this->weapon->getType() << std::endl;
}

Human_B::~Human_B()
{
};