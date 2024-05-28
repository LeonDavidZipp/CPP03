#include "../inc/ClapTrap.hpp"

// Constructors && Destructors
ClapTrap::ClapTrap() : _name("Default"), _hp(100), _ep(10), _attDmg(0) {
    std::cout << "ClapTrap\t" << this->getName() << " is created." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(100), _ep(10), _attDmg(0) {
    std::cout << "ClapTrap\t" << this->getName() << " is created." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& other) {
    this->_name = other.getName();
    this->_hp = other.getHp();
    this->_ep = other.getEp();
    this->_attDmg = other.getAttDmg();
    std::cout << "ClapTrap\t" << this->getName() << " is created from another ClapTrap: " << other.getName() << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        this->_name = other.getName();
        this->_hp = other.getHp();
        this->_ep = other.getEp();
        this->_attDmg = other.getAttDmg();
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap\t" << this->getName() << " is destroyed." << std::endl;
}

// Getters
std::string ClapTrap::getName() const {
    return this->_name;
}
int ClapTrap::getHp() const {
    return this->_hp;
}

int ClapTrap::getEp() const {
    return this->_ep;
}
int ClapTrap::getAttDmg() const {
    return this->_attDmg;
}

// Setters
void ClapTrap::setHp(int amount) {
    this->_hp = amount;
}

void ClapTrap::setEp(int amount) {
    this->_ep = amount;
}

void ClapTrap::setAttDmg(int amount) {
    this->_attDmg = amount;
}

// Actions
void ClapTrap::attack(const std::string& target) {
    std::string name = this->getName();

    if (this->getHp() <= 0) {
        std::cout << "ClapTrap\t" << name << " can't attack. It's dead." << std::endl;
        return ;
    }

    int ep = this->getEp();
    if (ep <= 0) {
        std::cout <<"ClapTrap\t" <<  name << " can't attack. No Energy Points left." << std::endl;
        return ;
    }

    std::cout << "ClapTrap\t" << name << " attacks " << target << ", causing " << this->getAttDmg() << " points of damage!" << std::endl;

    int newEp = ep - 1;
    newEp = newEp > 0 ? newEp : 0;
    this->setEp(newEp);

    if (newEp == 0) {
        std::cout << "ClapTrap\t" << name << " has no Energy Points left." << std::endl;
    } else {
        std::cout << "ClapTrap\t" << name << " has " << newEp << " Energy Points left." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::string name = this->getName();

    int hp = this->getHp();
    if (hp <= 0) {
        std::cout << "ClapTrap\t" << name << " is mercilessly beaten even though it is already dead." << std::endl;
        return ;
    }
    std::cout << "ClapTrap\t" << name << " has taken " << amount << " damage." << std::endl;

    int newHp = (hp - (int)amount) <= 0 ? 0 : hp - (int)amount;
    this->setHp(newHp);
    if (newHp == 0) {
        std::cout << "ClapTrap\t" << name << " died." << std::endl;
    } else {
        std::cout << "ClapTrap\t" << name << " has " << newHp << " HP left." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::string name = this->getName();

    int hp = this->getHp();
    if (hp <= 0) {
        std::cout << "ClapTrap\t" << name << " can't repair itself. It's dead." << std::endl;
        return ;
    }

    int ep = this->getEp();
    if (ep <= 0) {
        std::cout << "ClapTrap\t" << name << " can't repair itself. No Energy Points left." << std::endl;
        return ;
    }

    std::cout << "ClapTrap\t" << name << " is being repaired for " << amount << " HP." << std::endl;
    this->setHp(hp + (int)amount);
    std::cout << "ClapTrap\t" << name << " has " << this->getHp() << " HP now." << std::endl;

    int newEp = ep - 1;
    newEp = newEp > 0 ? newEp : 0;
    this->setEp(newEp);

    if (newEp == 0) {
        std::cout << "ClapTrap\t" << name << " has no Energy Points left." << std::endl;
    } else {
        std::cout << "ClapTrap\t" << name << " has " << newEp << " Energy Points left." << std::endl;
    }
}
