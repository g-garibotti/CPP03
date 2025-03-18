#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int        _hitPoints;
        int        _energyPoints;
        int        _attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string _name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap();

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif