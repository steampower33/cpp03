#include "ScavTrap.hpp"

int main() {
	ScavTrap a("a");
	ScavTrap b("b");

	std::cout << std::endl;

	a.attack("b");
	b.takeDamage(20);
	b.beRepaired(10);

	std::cout << std::endl;

	b.attack("a");
	a.takeDamage(20);
	a.beRepaired(15);
	
	std::cout << std::endl;

	a.guardGate();
	b.guardGate();
	
	std::cout << std::endl;
}