
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class Human_B
{
    public :
        Human_B(std::string name);
        ~Human_B();
        void setWeapon(Weapon &weapon);
        void attack();
    private :
        Weapon *weapon;
        std::string name;

};

#endif