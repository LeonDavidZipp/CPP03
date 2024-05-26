#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name") {
    this->_name = "Default";
    this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_attDmg = FragTrap::_attDmg;
    std::cout << "DiamondTrap\t" << _name << " has been created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
    this->_name = name;
    this->_hp = FragTrap::_hp;
    this->_ep = ScavTrap::_ep;
    this->_attDmg = FragTrap::_attDmg;
    std::cout << "DiamondTrap\t" << _name << " has been created" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& other) {
    this->_name = other.getName();
    this->_hp = other.getHp();
    this->_ep = other.getEp();
    this->_attDmg = other.getAttDmg();
    std::cout << "DiamondTrap\t" << _name << " has been created from another DiamondTrap: " << other._name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& other) {
    this->_name = other.getName();
    this->_hp = other.getHp();
    this->_ep = other.getEp();
    this->_attDmg = other.getAttDmg();
    std::cout << "DiamondTrap\t" << _name << " has been created from another DiamondTrap: " << other._name << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap\t" << _name << " has been destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "My DiamondTrap name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
