#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap Name Parameter constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (_hit_points == 0 || _energy_points == 0)
	{
		std::cout << "ClapTrap " << _name << " can't do anything" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
		<< " causing " << _attack_damage << " points of damage" << std::endl;
		_energy_points--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hit_points == 0)
	{
		std::cout << "ClapTrap " << _name << " can't do anything" << std::endl;
	}
	else if (_hit_points >= amount)
	{
		_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " loses " << amount << " points of hit points" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hit_points == 0 || _energy_points == 0)
	{
		std::cout << "ClapTrap " << _name << " can't do anything" << std::endl;
	}
	else
	{
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " repairs " << amount << " points of amount" << std::endl;
		_energy_points--;
	}
}