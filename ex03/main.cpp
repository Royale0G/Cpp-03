#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap player1("Yash");

	std::cout << "---------------------" << std::endl;
	player1.whoAmI();
	player1.attack("AAA");
}