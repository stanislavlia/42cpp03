#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const std::string& name);
        ~FragTrap();

        void    attack(const std::string& target);
        void    highFiveGuys();

};


#endif