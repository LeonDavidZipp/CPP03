#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap& other);
        ~DiamondTrap();

        DiamondTrap& operator=(DiamondTrap& other);

        void attack(const std::string& target);
        void whoAmI();

    private:
        std::string _name;
};

#endif
