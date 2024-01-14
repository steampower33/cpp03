#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap Name Parameter constructor called" << std::endl;
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (_hit_points == 0 || _energy_points == 0)
	{
		std::cout << "ScavTrap " << _name << " can't do anything" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target
		<< " causing " << _attack_damage << " points of damage" << std::endl;
		_energy_points--;
	}
}

void ScavTrap::guardGate() {
	if (_hit_points == 0 || _energy_points == 0)
	{
		std::cout << "ScavTrap " << _name << " can't do anything" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
	}
}