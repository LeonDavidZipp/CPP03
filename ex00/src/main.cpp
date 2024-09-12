#include "../inc/ClapTrap.hpp"

int main() {
    ClapTrap claptrap("Freddy");
	std::cout << "initializing --------------------------------" << std::endl;
    std::cout << "name: " << claptrap.getName() << std::endl;
    std::cout << "hp: " << claptrap.getHp() << std::endl;
    std::cout << "ep: " << claptrap.getEp() << std::endl;
    std::cout << "attDmg: " << claptrap.getAttDmg() << std::endl;
    ClapTrap claptrap2(claptrap);
    ClapTrap claptrap3;
    std::cout << "default name: " << claptrap3.getName() << std::endl;
    std::cout << "default hp: " << claptrap.getHp() << std::endl;
    std::cout << "default ep: " << claptrap.getEp() << std::endl;
    std::cout << "default attDmg: " << claptrap.getAttDmg() << std::endl;
    ClapTrap claptrap4("Springtrap");
    claptrap3 = claptrap4;

    std::cout << std::endl << "setters --------------------------------" << std::endl << std::endl;
    ClapTrap claptrap5;
    claptrap5.setHp(10);
    claptrap5.setEp(10);
    claptrap5.setAttDmg(10);
    std::cout << "hp: " << claptrap5.getHp() << std::endl;
    std::cout << "ep: " << claptrap5.getEp() << std::endl;
    std::cout << "attDmg: " << claptrap5.getAttDmg() << std::endl;

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    claptrap.setAttDmg(1);
    for (int i = 0; i < 10; i++) {
        std::cout << "attack " << i << " -----" << std::endl;
        claptrap.attack("Springtrap");
        claptrap4.takeDamage(claptrap.getAttDmg());
        std::cout << std::endl;
    }

    std::cout << "edge cases -----" << std::endl;
    claptrap.attack("Springtrap");
    claptrap4.attack("Freddy");

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    claptrap.beRepaired(5);
    claptrap4.beRepaired(5);

    claptrap2.beRepaired(5);
    claptrap3.beRepaired(5);

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    claptrap2.attack("Springtrap");
    claptrap4.takeDamage(claptrap2.getAttDmg());

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    return 0;
}