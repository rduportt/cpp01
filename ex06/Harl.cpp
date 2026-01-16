#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]\n I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\n This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    LevelFunction levels[] = 
    {
        {"DEBUG", &Harl::debug} ,
        {"INFO", &Harl::info} ,
        {"WARNING", &Harl::warning} ,
        {"ERROR", &Harl::error}
    };

    for(int i = 0; i < 4; i++)
    {
        if (levels[i].level == level)
        {
            for(int j = i; j < 4; j++)
              (this->*levels[j].function)();
            return ;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
}
