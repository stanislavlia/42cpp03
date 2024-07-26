#include "ClapTrap.h"
#include "FragTrap.h"

int main()
{
    ClapTrap    def;
    FragTrap    leha("Leha");
    FragTrap    serega("Serega");


    std::cout << "FragTrap Leha Hit points: " << leha.getHits() << std::endl;
    std::cout << "FragTrap Serega hit points: " << serega.getHits() << std::endl;
    std::cout << "Claptrap Default hit points: " << def.getHits() << std::endl;

    std::cout << "\n===========FIGHT!===============" << std::endl;

    leha.attack("Serega");
    serega.takeDamage(leha.getDamage());
    serega.attack("Leha");
    leha.takeDamage(serega.getDamage());
    leha.attack("Serega");
    serega.takeDamage(leha.getDamage());
    serega.attack("Default");
    def.takeDamage(serega.getDamage());

    serega.highFiveGuys();
    leha.highFiveGuys();

    std::cout << "===========RESULT===============" << std::endl;
    std::cout << "FragTrap Leha Hit points: " << leha.getHits() << std::endl;
    std::cout << "FragTrap Serega hit points: " << serega.getHits() << std::endl;
    std::cout << "Claptrap Default hit points: " << def.getHits() << std::endl;

    return 0;
}