#include "FragTrap.hpp"

int	main(void)
{
	FragTrap player3("Vex");
	FragTrap player4(player3);
	FragTrap player5("Hex");

	player4.attack("Hex");
	player3.attack("Vex");
	player3.takeDamage(10);
	player3.beRepaired(10);
	player3.highFivesGuys();
	return (0);
}