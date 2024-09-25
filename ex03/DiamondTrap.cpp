#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), Name(name)
{
	HitPoints = FragTrap::HitPoints;
	EnergyPoints = ScavTrap::EnergyPoints;
	AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap " << Name << " constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other), Name(other.Name)
{
	std::cout << "DiamondTrap " << Name << " copied!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	Name = other.Name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
	std::cout << "DiamondTrap " << Name << " assigned!" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << Name << " destructed!" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target); // ScavTrapのattackを使用
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap " << Name << " and my ClapTrap name is " << ClapTrap::Name << "!" << std::endl;
}
