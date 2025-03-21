#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "==== Testing ClapTrap ====" << std::endl;
    ClapTrap clapTrap("CT-001");
    clapTrap.attack("Enemy Robot");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);
    clapTrap.takeDamage(10);  
    clapTrap.beRepaired(5);
    
    std::cout << "\n==== Testing ScavTrap ====" << std::endl;
    ScavTrap scavTrap("ST-002");
    scavTrap.attack("Enemy Mech");
    scavTrap.takeDamage(30);
    scavTrap.beRepaired(20);
    scavTrap.guardGate();

    scavTrap.takeDamage(100);
    scavTrap.beRepaired(50);
    scavTrap.guardGate();
    std::cout << std::endl;
    return 0;
}