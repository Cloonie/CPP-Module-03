#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <cstring>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap& copy);
		ScavTrap& operator=(ScavTrap& copy);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

#endif