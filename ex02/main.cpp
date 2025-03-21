#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{   
    {
    ClapTrap clap("clap");
    ScavTrap scav("scav");
    FragTrap frag("frag");
    std::cout << std::endl;
    clap.attack("Target");
    clap.takeDamage(5);
    clap.beRepaired(3);
    std::cout << std::endl;
    scav.attack("Target");
    scav.takeDamage(15);
    scav.beRepaired(10);
    scav.guardGate();
    std::cout << std::endl;
    frag.attack("Target");
    frag.takeDamage(20);
    frag.beRepaired(15);
    frag.highFivesGuys();
    std::cout << std::endl;
    }
    std::cout << std::endl;
    {
        std::cout << "Creating a new FragTrap:" << std::endl;
        FragTrap tempFrag("Temporary");
    }
    std::cout << "Temporary FragTrap destroyed" << std::endl;
    
    return 0;
}