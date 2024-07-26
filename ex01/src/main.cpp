#include "ClapTrap.h"
#include "ScavTrap.h"

int main()
{
    ClapTrap jack("Jack", 10, 2, 3);

    ScavTrap kane("Kane");
    ScavTrap jonh("John");

    std::cout << "Scavtrap Kane Hit points: " << kane.getHits() << std::endl;
    std::cout << "Scavtrap John hit points: " << jonh.getHits() << std::endl;
    std::cout << "Claptrap Jack hit points: " << jack.getHits() << std::endl;

    std::cout << "\n===========FIGHT!===============" << std::endl;
    kane.attack("John");
    jonh.takeDamage(kane.getDamage());
    kane.attack("John");
    jonh.takeDamage(kane.getDamage());

    jonh.attack("Kane");
    kane.takeDamage(jonh.getDamage());

    jack.attack("Kane");
    kane.takeDamage(jack.getDamage());

    jonh.attack("Jack");
    jack.takeDamage(jonh.getDamage());

    kane.guardGate();
    
    std::cout << "\n===========HIT POINTS===============" << std::endl;
    std::cout << "Scavtrap Kane Hit points: " << kane.getHits() << std::endl;
    std::cout << "Scavtrap John hit points: " << jonh.getHits() << std::endl;
    std::cout << "Claptrap Jack hit points: " << jack.getHits() << std::endl;
    

    return 0;
} 