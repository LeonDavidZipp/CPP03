#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap {
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap& other);
        ~DiamondTrap();

        DiamondTrap& operator=(const DiamondTrap& other);

        void attack(const std::string& target);
        void whoAmI() const;

    private:
        std::string _name;
};

#endif
