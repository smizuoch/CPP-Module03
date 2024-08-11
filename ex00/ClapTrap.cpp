#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap " << Name << " constructed!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << Name << " destructed!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage
		          << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " cannot attack, insufficient energy or hit points!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints <= amount)
	{
		HitPoints = 0;
	}
	else
	{
		HitPoints -= amount;
	}
	std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		HitPoints += amount;
		EnergyPoints--;
		std::cout << "ClapTrap " << Name << " is repaired by " << amount << " points!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " cannot be repaired, insufficient energy or hit points!" << std::endl;
	}
}
