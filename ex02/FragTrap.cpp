#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	std::cout << "FragTrap default constructor called" << std::endl;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	std::cout << "FragTrap name constructor called" << std::endl;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrap): ClapTrap(fragTrap){
	if(this != &fragTrap){
		std::cout << "FragTrap copy constructor called" << std::endl;
		*this = fragTrap;
	}
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap){
	if(this != &fragTrap) {
		std::cout << "FragTrap assignation operator called" << std::endl;
		this->name = fragTrap.name;
		this->attack_damage = fragTrap.attack_damage;
		this->energy_points = fragTrap.energy_points;
		this->hit_points = fragTrap.hit_points;
	}
	return *this;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << this->name << " wants to high five!" << std::endl;
}