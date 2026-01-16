#include <iostream>

int main()
{
    std::string hi = "HI THIS IS BRAIN";
    std::string *stringPTR = &hi;
    std::string &stringREF = hi;

    std::cout << "The memory address of the string variable : " << &hi << std::endl;
    std::cout << "The memory address held by stringPTR      : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF      : " << &stringREF << std::endl;
    std::cout << "==========================================================" << std::endl;
    std::cout << "The value of the string variable          : " << hi << std::endl;
    std::cout << "The value pointed to by stringPTR         : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF         : " << stringREF << std::endl;
}