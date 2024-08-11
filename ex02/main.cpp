#include "FragTrap.hpp"

int main()
{
	FragTrap frag("FR4G-TP");

	frag.attack("target1");
	frag.takeDamage(20);
	frag.beRepaired(10);

	frag.highFivesGuys();
	frag.attack("target2");

	return 0;
}
