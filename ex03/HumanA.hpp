#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class Human_A
{
    private :
        Weapon &_weapon;
        std::string _name;
    public :
        Human_A(std::string name, Weapon &weapon);
        ~Human_A();
        void attack();
};

#endif