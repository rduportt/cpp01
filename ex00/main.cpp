#include "Zombie.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Test 1: Zombie sur la stack ===" << std::endl;
    randomChump("StackZombie");
    
    std::cout << "\n=== Test 2: Zombie sur la heap ===" << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;
}