#include "../inc/ClapTrap.hpp"

int main() {
    ClapTrap claptrap("Freddy");
    ClapTrap claptrap2(claptrap);
    ClapTrap claptrap3;
    ClapTrap claptrap4("Springtrap");
    claptrap3 = claptrap4;

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    claptrap.setAttDmg(1);
    for (uint8_t i = 0; i < 10; i++) {
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