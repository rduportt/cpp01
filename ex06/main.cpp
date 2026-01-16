#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "I only understand 1 argument !!!\n";
        return 1;
    }
    Harl Harlo;
    Harlo.complain(argv[1]);
}