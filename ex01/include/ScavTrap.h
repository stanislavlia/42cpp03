#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.h"

 class ScavTrap : public ClapTrap
 {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();

        void    guardGate();
        void    attack(const std::string& target);
 };

#endif