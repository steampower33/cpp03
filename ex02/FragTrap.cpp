#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap Name Parameter constructor called" << std::endl;
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " Destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	if (_hit_points == 0 || _energy_points == 0)
	{
		std::cout << "FragTrap " << _name << " can't do anything" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << _name << " high fives!" << std::endl;
		_energy_points--;
	}
}