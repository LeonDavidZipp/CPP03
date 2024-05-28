#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->_ep = 50;
    this->_attDmg = 20;
    std::cout << "FragTrap\t" << _name << " created." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_ep = 50;
    this->_attDmg = 20;
    std::cout << "FragTrap\t" << _name << " created." << std::endl;
}

FragTrap::~FragTrap() : ~ClapTrap() {
    std::cout << "FragTrap\t" << _name << " destroyed." << std::endl;
}

FragTrap::FragTrap(FragTrap& other) : ClapTrap(other){
    std::cout << "FragTrap\t" << _name << " created from another FragTrap: " << other.getName() << std::endl;
}

void FragTrap::attack(std::string const & target) {
    std::string name = this->getName();

    if (this->getHp() <= 0) {
        std::cout << "FragTrap\t" << name << " can't attack. It's dead." << std::endl;
        return ;
    }

    int ep = this->getEp();
    if (ep <= 0) {
        std::cout << "FragTrap\t" << name << " can't attack. No Energy Points left." << std::endl;
        return ;
    }

    std::cout << this->_name << " attacks " << target << ", causing " << this->getAttDmg() << " points of damage!" << std::endl;

    int newEp = ep - 1;
    newEp = newEp > 0 ? newEp : 0;
    this->setEp(newEp);

    if (newEp == 0) {
        std::cout << "FragTrap\t" << name << " has no Energy Points left." << std::endl;
    } else {
        std::cout << "FragTrap\t" << name << " has " << newEp << " Energy Points left." << std::endl;
    }
}

void FragTrap::highFivesGuys() {
    if (this->getHp() <= 0) {
        std::cout << "FragTrap\t" << this->getName() << " can't request a High Five. It's dead." << std::endl;
        return ;
    }

    std::cout << "FragTrap\t" << this->getName() << " requests the Highest of Fives!" << std::endl;
}
