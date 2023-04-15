#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <cstring>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap& copy);
		FragTrap& operator=(FragTrap& copy);
		~FragTrap();
		void highFivesGuys(void);
};

#endif