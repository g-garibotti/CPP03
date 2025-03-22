#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    this->_name = "";
    ClapTrap::_name = "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints; 
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;  
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    
    std::cout << "DiamondTrap named constructor called for " << name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = src;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        ClapTrap::_name = rhs.ClapTrap::_name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}


void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << this->_name << " and my ClapTrap name is " 
              << ClapTrap::_name << std::endl;
}
