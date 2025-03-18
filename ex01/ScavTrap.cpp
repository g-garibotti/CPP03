#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    if (this != &rhs)
    {
        ClapTrap::operator=(rhs);
    }
    return *this;
}

void ScavTrap::attack(std::string const & target)
{
    if (_attackDamage <= 0)
    {
        std::cout << "ScavTrap " << _name << " can't attack! No attack damage." << std::endl;
        return;
    }
    if (_energyPoints <= 0 || _hitPoints <= 0) {
        std::cout << "ScavTrap " << _name << " can't attack! No energy or hit points left." << std::endl;
        return;
    }
    
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " viciously attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}