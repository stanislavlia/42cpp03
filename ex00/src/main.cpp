#include "ClapTrap.h"

int main()
{
    ClapTrap clp;
    ClapTrap hueta("Hueta", 10, 43, 32);
    ClapTrap gey;


    gey = hueta;
    std::cout << hueta.getName() << std::endl;
    std::cout << gey.getName() << std::endl;

}