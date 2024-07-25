#include "ClapTrap.h"
#include "ScavTrap.h"

int main()
{
    ClapTrap def;
    ClapTrap jack("Jack", 10, 2, 3);

    ScavTrap scvt("Kane");

    

    std::cout << def.getName() << std::endl;
    std::cout << jack.getName() << std::endl;

    def.attack("Jack");
    jack.takeDamage(def.getDamage());

    std::cout << "Jack Hit points: " << jack.getHits() << std::endl;
    std::cout << "Default hit points: " << def.getHits() << std::endl;
    std::cout << "=====JACK ATTACKS 2 times===============" << std::endl;

    jack.attack("Default");
    def.takeDamage(jack.getDamage());
    jack.attack("Default");
    def.takeDamage(jack.getDamage());
    jack.attack("Default");
    def.beRepaired(2); 
    jack.beRepaired(2);

    std::cout << "Jack Hit points: " << jack.getHits() << std::endl;
    std::cout << "Default hit points: " << def.getHits() << std::endl;

    return 0;
} 