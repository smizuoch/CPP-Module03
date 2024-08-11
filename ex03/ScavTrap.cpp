#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap " << Name << " constructed!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << Name << " destructed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage
		          << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else
	{
		std::cout << "ScavTrap " << Name << " cannot attack, insufficient energy or hit points!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode!" << std::endl;
}
