#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstring>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energypoints;
		unsigned int	_attackdmg;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& copy);
		ClapTrap& operator=(ClapTrap& copy);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif