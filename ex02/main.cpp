#include "FragTrap.hpp"

int main() {
	FragTrap a("a");
	FragTrap b("b");

	std::cout << std::endl;

	a.attack("b");
	b.takeDamage(30);
	b.beRepaired(10);

	std::cout << std::endl;

	b.attack("a");
	a.takeDamage(30);
	a.beRepaired(15);

	std::cout << std::endl;

	a.highFivesGuys();
	b.highFivesGuys();

	std::cout << std::endl;
}