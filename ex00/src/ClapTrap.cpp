#include "../inc/ClapTrap.hpp"

// Constructors && Destructors
ClapTrap::ClapTrap() : _name("Default"), _hp(10), _ep(10), _attDmg(0) {
    std::cout << "ClapTrap " << this->getName() << " is created." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _attDmg(0) {
    std::cout << "ClapTrap " << this->getName() << " is created." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& other) {
    this->_name = other.getName();
    this->_hp = other.getHp();
    this->_ep = other.getEp();
    this->_attDmg = other.getAttDmg();
    std::cout << "ClapTrap " << this->getName() << " is created from another ClapTrap." << other.getName() << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->getName() << " is destroyed." << std::endl;
}

// Getters
std::string ClapTrap::getName() {
    return this->_name;
}
int ClapTrap::getHp() {
    return this->_hp;
}

int ClapTrap::getEp() {
    return this->_ep;
}
int ClapTrap::getAttDmg() {
    return this->_attDmg;
}

// Setters
void ClapTrap::setHp(int amount) {
    this->_hp = amount;
}

void ClapTrap::setEp(int amount) {
    this->_ep = amount;
}

// Actions
void ClapTrap::attack(const std::string& target) {
    std::string name = this->getName();
    int ep = this->getEp();
    if (ep <= 0) {
        std::cout << name << " can't attack. No Energy Points left." << std::endl;
        return ;
    }

    std::cout << this->_name << " attacks " << target << ", causing " << this->getAttDmg() << " points of damage!" << std::endl;

    int newEp = ep - 1;
    if (newEp > 0) {
        this->setEp(newEp);
    } else {
        this->setEp(0);
        std::cout << name << " has no Energy Points left." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::string name = this->getName();

    std::cout << name << " has taken " << amount << " damage." << std::endl;

    int newHp = this->getHp() - (int)amount;
    if (newHp > 0) {
        this->setHp(newHp);
    } else {
        this->setHp(0);
        std::cout << name << " died." << std::endl;
        delete this;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    int hp = this->getHp();
    if (hp <= 0) {
        delete this;
        return ;
    }

    std::string name = this->getName();

    int ep = this->getEp();
    if (ep <= 0) {
        std::cout << name << " can't repair itself. No Energy Points left." << std::endl;
        return ;
    }

    this->setHp(hp + (int)amount);

    int newEp = ep - 1;
    if (newEp > 0) {
        this->setEp(newEp);
    } else {
        this->setEp(0);
        std::cout << name << " has no Energy Points left." << std::endl;
    }
}
