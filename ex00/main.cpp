#include "ClapTrap.hpp"

int main(){
	ClapTrap claptrap("BOBO");
	ClapTrap claptrap2(claptrap);
	ClapTrap claptrap3("BUBU");
	claptrap.attack("BUBU");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	return 0;
}