#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->_name = "Default";
    this->_hp = 100;
    this->_ep = 50;
    this->_attDmg = 20;
    std::cout << "ScavTrap " << _name << " created." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_name = name;
    this->_hp = 100;
    this->_ep = 50;
    this->_attDmg = 20;
    std::cout << "ScavTrap " << _name << " created." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destroyed." << std::endl;
}

void attack(std::string const & target) {
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attDmg << " points of damage!" << std::endl;
}