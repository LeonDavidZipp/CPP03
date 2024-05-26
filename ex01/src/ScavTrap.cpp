#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    // this->_name = "Default";
    this->_hp = 100;
    this->_ep = 50;
    this->_attDmg = 20;
    this->_isGuarding = false;
    std::cout << "ScavTrap " << _name << " created." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    // this->_name = name;
    this->_hp = 100;
    this->_ep = 50;
    this->_attDmg = 20;
    this->_isGuarding = false;
    std::cout << "ScavTrap " << _name << " created." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destroyed." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap(other){
    // this->_name = other.getName();
    // this->_hp = other.getHp();
    // this->_ep = other.getEp();
    this->_attDmg = other.getAttDmg();
    this->_isGuarding = other._isGuarding;
    std::cout << "ScavTrap " << _name << " created from another ScavTrap: " << other.getName() << std::endl;
}

bool ScavTrap::getIsGuarding() const {
    return this->_isGuarding;
}

void ScavTrap::setIsGuarding(bool isGuarding) {
    this->_isGuarding = isGuarding;
}

void ScavTrap::attack(std::string const & target) {
    std::string name = this->getName();

    if (this->getHp() <= 0) {
        std::cout << "ScavTrap " << name << " can't attack. It's dead." << std::endl;
        return ;
    }

    int ep = this->getEp();
    if (ep <= 0) {
        std::cout << "ScavTrap " << name << " can't attack. No Energy Points left." << std::endl;
        return ;
    }

    std::cout << this->_name << " attacks " << target << ", causing " << this->getAttDmg() << " points of damage!" << std::endl;

    int newEp = ep - 1;
    newEp = newEp > 0 ? newEp : 0;
    this->setEp(newEp);

    if (newEp == 0) {
        std::cout << "ScavTrap " << name << " has no Energy Points left." << std::endl;
    } else {
        std::cout << "ScavTrap " << name << " has " << newEp << " Energy Points left." << std::endl;
    }
}

void ScavTrap::guardGate() {
    if (this->getHp() <= 0) {
        std::cout << "ScavTrap " << this->getName() << " can't guard. It's dead." << std::endl;
        return ;
    }

    std::string name = this->getName();

    bool isGuarding = !this->getIsGuarding();
    setIsGuarding(isGuarding);
    if (isGuarding) {
         std::cout << "ScavTrap " << name << " has entered in Gate keeper mode." << std::endl;
    } else {
        std::cout << "ScavTrap " << name << " has exited from Gate keeper mode." << std::endl;
    }
}
