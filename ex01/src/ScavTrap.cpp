#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap("Default ScavTrap", 100, 50, 20)
{
    std::cout << "Default constructor for ScavTrap is called" << std::endl;
};


ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "Constructor for ScavTrap is called" << std::endl;
};

ScavTrap::~ScavTrap()
{ 
    
};