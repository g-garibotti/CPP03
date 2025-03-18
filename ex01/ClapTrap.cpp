#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    if (this != &rhs)
    {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return *this;
}

void ClapTrap::attack(std::string const & target)
{
    if (_attackDamage <= 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack! No attack damage." << std::endl;
        return;
    }
    if (_energyPoints <= 0 || _hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " can't attack! No energy or hit points left." << std::endl;
        return;
    }
    
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << _name << " is already out of hit points!" << std::endl;
        return;
    }
    
    _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;
        
    std::cout << _name << " takes " << amount << " points of damage! Hit points left: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints <= 0 || _hitPoints <= 0) {
        std::cout << _name << " can't repair itself! No energy or hit points left." << std::endl;
        return;
    }
    
    _energyPoints--;
    _hitPoints += amount;
    
    std::cout << _name << " is repaired for " << amount << " points! Hit points: " << _hitPoints << std::endl;
}