#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main()
{      
    {
        std::cout << "=== TESTING DIAMONDTRAP ===" << std::endl;
        DiamondTrap diamond("diamond");
        std::cout << std::endl;
        
        diamond.attack("Target");
        diamond.takeDamage(30);
        diamond.beRepaired(20);
        diamond.guardGate();
        diamond.highFivesGuys();
        diamond.whoAmI();
        std::cout << std::endl;
    }
    return 0;
}
