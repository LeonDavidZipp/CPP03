#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap {
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap& other);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName();
        int getHp();
        int getEp();
        int getAttDmg();

        void setHp(int amount);
        void setEp(int amount);
        void setAttDmg(int amount);

    protected:
        std::string _name;
        int _hp;
        int _ep;
        int _attDmg;
};

#endif