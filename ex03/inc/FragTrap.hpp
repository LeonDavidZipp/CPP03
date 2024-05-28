#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap& other);
        ~FragTrap();

        FragTrap& operator=(const FragTrap& other);

        bool getIsGuarding() const;
        void setIsGuarding(bool isGuarding);

        void attack(const std::string& target);
        void highFivesGuys() const;
};

#endif
