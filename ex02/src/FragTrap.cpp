#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap("Default", 100, 100, 30)
{
    std::cout << "Default constructor for FragTrap is called" << std::endl;
};

FragTrap::FragTrap(const std::string& name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "Constructor for FragTrap is called" << std::endl;
};

FragTrap::~FragTrap()
{
    std::cout << "Destructor for FragTrap is called" << std::endl;
};

void	FragTrap::attack(const std::string& target)
{
	if (_energy_points > 0 && _hit_points > 0)
    {
        std::cout << "FragTrap " <<_name  << " attacks "
         << target << ", causing " << _atack_damage << " points of damage!" << std::endl;
        
        this->_energy_points--;
    }
    else
    {
        std::cout << "FragTrap" << _name << "doesn't have energy to attack!" << std::endl;
    }
};

void    FragTrap::highFiveGuys()
{
    std::cout << "FragTrap " << _name << " says: Hey guys! Stop fighting! High Five GUYS!!!" << std::endl;
};