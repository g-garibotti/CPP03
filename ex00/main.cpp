#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap clapTrap("ClapTrap");
    clapTrap.attack("target");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(5);
    return 0;
}
