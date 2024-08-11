#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("CL4P-TP");

	clap.attack("target1");
	clap.takeDamage(3);
	clap.beRepaired(5);

	clap.attack("target2");
	clap.takeDamage(15);
	clap.beRepaired(10);

	return 0;
}
