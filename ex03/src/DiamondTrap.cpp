#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
    _name = "Default";
    ClapTrap::_name = _name + "_clap_name";
    std::cout << "DiamondTrap " << _name << " has been created" << std::endl;
}



void DiamondTrap::whoAmI() {
    std::cout << "My DiamondTrap name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
