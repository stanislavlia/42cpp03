#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    protected:
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
        std::string getName();
        unsigned int getHits();
        unsigned int getDamage();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
};


#endif