#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap& copy);
		DiamondTrap& operator=(DiamondTrap& copy);
		~DiamondTrap();
		void whoAmI();
		void attack(const std::string& target);
};

#endif