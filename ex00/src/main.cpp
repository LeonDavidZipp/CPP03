#include "../inc/ClapTrap.hpp"

int main() {
    ClapTrap claptrap("Freddy");
    ClapTrap claptrap2(claptrap);
    ClapTrap claptrap3;
    ClapTrap claptrap4("Springtrap");
    ClapTrap claptrap5 = claptrap3;

    claptrap.setAttDmg(1);
    for (int i = 0; i <= 10; i++) {
        claptrap.attack("Springtrap");
        claptrap4.takeDamage(claptrap.getAttDmg());
    }
    claptrap4.attack("Freddy");
    claptrap.beRepaired(5);



    return 0;
}