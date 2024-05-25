#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hp(10), _ep(10), _attDmg(0) {}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _attDmg(0) {}

ClapTrap::ClapTrap(ClapTrap& other) {
    this->_name = other.getName();
    this->_hp = other.getHp();
    this->_ep = other.getEp();
    this->_attDmg = other.getAttDmg();
}

ClapTrap::~ClapTrap() {}
