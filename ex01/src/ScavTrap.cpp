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
	std::cout << "Destructor for ScavTrap is called" << std::endl;
};

void	ScavTrap::attack(const std::string& target)
{
	if (_energy_points > 0 && _hit_points > 0)
    {
        std::cout << "ScavTrap " <<_name  << " attacks "
         << target << ", causing " << _atack_damage << " points of damage!" << std::endl;
        
        this->_energy_points--;
    }
    else
    {
        std::cout << "ScavTrap" << _name << "doesn't have energy to attack!" << std::endl;
    }
};