
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->name = "";
	this->attack_damage = 0;
	this->energy_points = 10;
	this->hit_points = 10;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap name constructor called" << std::endl;
	this->name = name;
	this->attack_damage = 0;
	this->energy_points = 10;
	this->hit_points = 10;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = claptrap;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap) {
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->name = claptrap.name;
	this->attack_damage = claptrap.attack_damage;
	this->energy_points = claptrap.energy_points;
	this->hit_points = claptrap.hit_points;
	return *this;
}

void ClapTrap::attack(std::string const & target){
	if(this->energy_points > 0 && this->hit_points > 0){
		std::cout << "Claptrap " << this->name << " attacks " << target << ", causing " << this->energy_points << " points of damage!" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << "ClapTrap " << this->name << " couldn't attack cause it has no energy points left or it's dead!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
		std::cout << "ClapTrap " << this->name << " has taken "
				  << amount << " points of damage" << std::endl;
		this->hit_points -= amount;
	if(this->hit_points > 0)
		std::cout << "ClapTrap " << this->name << " has " << this->hit_points << " hit_points left" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " died!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " has repaired " << amount << " of hit_points back" << std::endl;
		this->energy_points--;
		this->hit_points += amount;
		std::cout << "ClapTrap " << this->name << " has "
				  << this->hit_points << " hit_points left" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " coudn't repair itself cause it has no energy points left or it's dead" << std::endl;
	}
}