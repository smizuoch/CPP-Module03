#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
  protected: // protectedに変更して、派生クラスからアクセス可能にする
	std::string Name;
	unsigned int HitPoints;
	unsigned int EnergyPoints;
	unsigned int AttackDamage;

  public:
	ClapTrap(std::string name);
	~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
