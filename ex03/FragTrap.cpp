#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap " << Name << " constructed!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name << " destructed!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "FragTrap " << Name << " attacks " << target << ", causing " << AttackDamage
		          << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else
	{
		std::cout << "FragTrap " << Name << " cannot attack, insufficient energy or hit points!" << std::endl;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << Name << " requests a positive high five!" << std::endl;
}
