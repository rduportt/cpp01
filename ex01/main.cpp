#include "Zombie.hpp"
#include <iostream>

int main()
{
    std::cout << "\n=== Test 1: Horde de 20 zombies ===" << std::endl;
    Zombie* BigHorde = zombieHorde(20, "Alice");
    for (int i = 0; i < 20; i++)
    {
        BigHorde[i].announce();
    }
    delete[] BigHorde;
    std::cout << "\n=== Test 2: Horde de 5 zombies ===" << std::endl;
    Zombie* Horde = zombieHorde(5, "Alice");
    for (int i = 0; i < 5; i++)
    {
        Horde[i].announce();
    }
    delete[] Horde;
    std::cout << "\n=== Test 3: Horde de 3 zombies ===" << std::endl;
    Zombie* smallHorde = zombieHorde(3, "Alice");
    for (int i = 0; i < 3; i++)
    {
        smallHorde[i].announce();
    }
    delete[] smallHorde;
}