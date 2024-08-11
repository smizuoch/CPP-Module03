#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("CL4P-TP");
	ScavTrap scav("SC4V-TP");

	clap.attack("target1");
	clap.takeDamage(3);
	clap.beRepaired(5);

	scav.attack("target2");
	scav.takeDamage(15);
	scav.beRepaired(10);
	scav.guardGate();

	return 0;
}
