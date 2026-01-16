#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private :
        std::string type;
    public :
        Weapon(std::string name);
        ~Weapon();
        void setType(std::string newType);
        std::string getType();
};

#endif