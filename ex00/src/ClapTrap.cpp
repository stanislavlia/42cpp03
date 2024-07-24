#include "ClapTrap.h"

ClapTrap::ClapTrap() : _name("Default"), _hit_points(10), _energy_points(10), _atack_damage(0)
{
    std::cout << "Called default constructor" << std::endl;
};

ClapTrap::ClapTrap(std::string name,
                unsigned int hit_points,
                unsigned int energy_points,
                unsigned int atack_damage
                ) : _name(name), _hit_points(hit_points), _energy_points(energy_points), _atack_damage(atack_damage)
{
    std::cout << "Called constructor with params" << std::endl;
};

ClapTrap::~ClapTrap()
{
    std::cout << "Called destructor" << std::endl;
};

