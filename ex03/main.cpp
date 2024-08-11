#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("DI4M-TP");

	diamond.attack("target1");
	diamond.takeDamage(30);
	diamond.beRepaired(20);

	diamond.whoAmI();

	return 0;
}
