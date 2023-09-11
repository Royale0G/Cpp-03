#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	this->name = "default";
	FragTrap::hit_points = 100;
	ScavTrap::energy_points = 50;
	FragTrap::attack_damage = 30;
	std::cout << "DiamondTrap " << this->name << " is born!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name){
	ClapTrap::name = (name + "_clap_name");
	this->name = name;
	ScavTrap::energy_points = 50;
	FragTrap::hit_points = 100;
	FragTrap::attack_damage = 30;
	std::cout << "DiamondTrap " << this->name << " is born!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap){
	*this = diamondTrap;
	std::cout << "DiamondTrap " << this->name << " is born!" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << this->name << " is dead!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap){
	this->name = diamondTrap.name;
	this->hit_points = diamondTrap.hit_points;
	this->energy_points = diamondTrap.energy_points;
	this->attack_damage = diamondTrap.attack_damage;
	return (*this);
}

void DiamondTrap::attack(std::string const &target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "My name is " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}