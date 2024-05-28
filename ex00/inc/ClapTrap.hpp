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

        ClapTrap& operator=(const ClapTrap& other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName() const;
        int getHp() const;
        int getEp() const;
        int getAttDmg() const;

        void setHp(int amount);
        void setEp(int amount);
        void setAttDmg(int amount);

    private:
        std::string _name;
        int _hp;
        int _ep;
        int _attDmg;
};

#endif
