#include "ClapTrap.hpp"

int main() {
	ClapTrap a("a");
	ClapTrap b("b");
	
	a.attack("b");
	b.takeDamage(5);
	b.beRepaired(10);
}