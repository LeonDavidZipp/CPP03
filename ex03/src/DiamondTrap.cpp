#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name") {
    this->_name = "Default_diamond_name";
    this->_hp = FragTrap::_hp;
    this->_ep = ScavTrap::_ep;
    this->_attDmg = FragTrap::_attDmg;
    std::cout << "DiamondTrap\t" << _name << " has been created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
    this->_name = name + "_diamond_name";
    this->_hp = FragTrap::_hp;
    this->_ep = ScavTrap::_ep;
    this->_attDmg = FragTrap::_attDmg;
    std::cout << "DiamondTrap\t" << _name << " has been created" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& other) : ClapTrap(other.ClapTrap::getName()), ScavTrap(other.ScavTrap::getName()), FragTrap(other.FragTrap::getName()) {
    this->_name = other._name;
    this->_hp = other._hp;
    this->_ep = other._ep;
    this->_attDmg = other._attDmg;
    std::cout << "DiamondTrap\t" << _name << " has been created from another DiamondTrap: " << other._name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    this->_name = other._name;
    this->_hp = other._hp;
    this->_ep = other._ep;
    this->_attDmg = other._attDmg;
    std::cout << "DiamondTrap\t" << _name << " has been created from another DiamondTrap: " << other._name << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap\t" << _name << " has been destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const {
    std::cout << "My DiamondTrap name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
