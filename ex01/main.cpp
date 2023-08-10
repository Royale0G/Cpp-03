#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	ScavTrap("ScavTrap");

	ScavTrap.attack("target");
	ScavTrap.takeDamage(10);
	ScavTrap.beRepaired(10);
	ScavTrap.guardGate();
	return (0);
}