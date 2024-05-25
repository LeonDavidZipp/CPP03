#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap& other);
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();

    protected:
        bool _isGuarding;

};

#endif