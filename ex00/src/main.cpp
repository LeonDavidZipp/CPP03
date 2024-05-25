#include "../inc/ClapTrap.hpp"

int main() {
    ClapTrap claptrap("Freddy");
    ClapTrap claptrap2(claptrap);
    ClapTrap claptrap3;
    ClapTrap claptrap4("Springtrap");

    for (int i = 0; i <= 10; i++) {
        claptrap.attack("Springtrap");
    }
    claptrap.attack("Freddy");
    claptrap4.takeDamage(claptrap.getAttDmg());
    claptrap.beRepaired(5);



    return 0;
}