#include "Zombie.hpp"
#include "iostream"

void randomChump(std::string name)
{
    Zombie Chump(name);
    Chump.announce();
}