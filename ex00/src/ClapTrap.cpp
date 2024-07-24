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

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hit_points(other._hit_points),
    _energy_points(other._energy_points), _atack_damage(other._atack_damage)
{
    std::cout << "Called Copy constructor" << std::endl;
};


ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_atack_damage = other._atack_damage;
    this->_hit_points = other._hit_points;
    this->_atack_damage = other._atack_damage;
    this->_name = other._name;

    return *this;
};

ClapTrap::~ClapTrap()
{
    std::cout << "Called destructor" << std::endl;
};

std::string ClapTrap::getName()
{
    return this->_name;
}
