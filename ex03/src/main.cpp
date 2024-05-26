#include "../inc/FragTrap.hpp"

int main() {
    FragTrap fragtrap("Freddy");
    FragTrap fragtrap2(fragtrap);
    FragTrap fragtrap3;
    FragTrap fragtrap4("Springtrap");
    FragTrap fragtrap5 = fragtrap3;

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    for (int i = 0; i < 5; i++) {
        fragtrap.attack("Springtrap");
        fragtrap4.takeDamage(fragtrap.getAttDmg());
    }
    fragtrap.attack("Springtrap");
    fragtrap4.attack("Freddy");

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    fragtrap.beRepaired(5);
    fragtrap4.beRepaired(5);

    fragtrap2.beRepaired(5);
    fragtrap3.beRepaired(5);
    fragtrap5.beRepaired(5);

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    fragtrap2.attack("Springtrap");
    fragtrap4.takeDamage(fragtrap2.getAttDmg());

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    fragtrap2.highFivesGuys();
    fragtrap2.setHp(0);
    fragtrap2.highFivesGuys();

    std::cout << std::endl << "--------------------------------" << std::endl << std::endl;

    return 0;
}