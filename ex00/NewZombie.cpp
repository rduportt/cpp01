#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie(std::string name)
{
    Zombie* New_Zombie = new Zombie(name);
    return (New_Zombie);
}