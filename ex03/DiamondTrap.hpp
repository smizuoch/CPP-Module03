#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
  private:
	std::string Name;

  public:
	DiamondTrap(std::string name);
	~DiamondTrap();

	void attack(const std::string &target);
	void whoAmI();
};

#endif
