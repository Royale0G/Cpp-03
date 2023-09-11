#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
	std::cout << "ScavTrap name constructor called" << std::endl;
	attack_damage = 20;
	energy_points = 50;
	hit_points = 100;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap):ClapTrap(scavTrap){
	if(this != &scavTrap){
		std::cout << "ScavTrap copy constructor called" << std::endl;
		*this = scavTrap;
	}
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap){
	if(this != &scavTrap) {
		std::cout << "ScavTrap assignation operator called" << std::endl;
		this->name = scavTrap.name;
		this->attack_damage = scavTrap.attack_damage;
		this->energy_points = scavTrap.energy_points;
		this->hit_points = scavTrap.hit_points;
	}
	return *this;
}

void ScavTrap::attack(std::string const &target){
	if(this->energy_points > 0 && this->hit_points > 0){
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->energy_points << " points of damage!" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << "ScavTrap " << this->name << " couldn't attack cause it has no energy points left or it's dead!" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}