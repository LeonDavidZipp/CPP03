#include "../inc/DiamondTrap.hpp"

int main() {
    DiamondTrap diamondtrap("Freddy");
    DiamondTrap diamondtrap2(diamondtrap);
    DiamondTrap diamondtrap3;
    DiamondTrap diamondtrap4("Springtrap");
    DiamondTrap diamondtrap5 = diamondtrap3;

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    for (int i = 0; i < 5; i++) {
        diamondtrap.attack("Springtrap");
        diamondtrap4.takeDamage(diamondtrap.getAttDmg());
    }
    diamondtrap.attack("Springtrap");
    diamondtrap4.attack("Freddy");

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    diamondtrap.beRepaired(5);
    diamondtrap4.beRepaired(5);

    diamondtrap2.beRepaired(5);
    diamondtrap3.beRepaired(5);
    diamondtrap5.beRepaired(5);

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    diamondtrap2.attack("Springtrap");
    diamondtrap4.takeDamage(diamondtrap2.getAttDmg());

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    diamondtrap2.highFivesGuys();
    diamondtrap2.setHp(0);
    diamondtrap2.highFivesGuys();

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    diamondtrap.guardGate();
    diamondtrap2.setHp(0);
    diamondtrap.guardGate();

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    diamondtrap.whoAmI();

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    return 0;
}