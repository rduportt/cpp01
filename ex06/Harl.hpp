#ifndef HARL_HPP_
#define HARL_HPP_

#include <iostream>

class Harl
{
    private :
        void debug();
        void info();
        void warning();
        void error();
    public :
        Harl();
        ~Harl();
        void complain(std::string level);
};

typedef struct LevelFunction 
{
    std::string level;
    void (Harl::*function)(void);
}LevelFunction;

#endif