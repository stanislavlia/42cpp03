#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    private:
        std::string  _name;
        unsigned int _hit_points;
        unsigned int _energy_points;
        unsigned int _atack_damage;

    public:
        ClapTrap();
        ClapTrap(std::string name,
                unsigned int hit_points,
                unsigned int energy_points,
                unsigned int atack_damage
                );
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();


};


#endif