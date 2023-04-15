#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "DEFAULT";
	_hitpoints = 10;
	_energypoints = 10;
	_attackdmg = 0;
	std::cout << "Default constructor is called: " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitpoints = 10;
	_energypoints = 10;
	_attackdmg = 0;
	std::cout << "Named constructor is called: " << _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& copy)
{
	std::cout << "Copy constructor is called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(ClapTrap& copy)
{
	std::cout	<< "Copy assignment operator is called: "
				<< _name << " = " << copy._name
				<< std::endl;
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_energypoints = copy._energypoints;
	_attackdmg = copy._attackdmg;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor is called: ";
	std::cout << _name << " destroyed. Stats";
	std::cout << " | Hit Points:" << _hitpoints;
	std::cout << " | Energy Points:" << _energypoints;
	std::cout << " | Attack Damage:" << _attackdmg << " |"
	<< std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energypoints > 0)
	{
		_energypoints -= 1;
		std::cout	<< "ClapTrap " << _name << " attacks " << target
					<< ", causing " << _attackdmg << " points of damage!" << std::endl;
	}
	else
		std::cout	<< "ClapTrap " << _name << " is already at 0 energy, unable to attack."
					<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints >= amount)
	{
		_hitpoints -= amount;
		std::cout	<< "ClapTrap " << _name << " took " << amount
					<<" points of damage. Remaining HP: " << _hitpoints
					<< std::endl;
	}
	else if (_hitpoints != 0)
	{
		_hitpoints = 0;
		std::cout	<< "ClapTrap " << _name << " took an overkill by " << amount
					<<" points of damage. Remaining HP: " << _hitpoints
					<< std::endl;
	}
	else
		std::cout	<< "ClapTrap " << _name << " is already at 0 hitpoints, unable to take damage"
					<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energypoints > 0)
	{
		_energypoints -= 1;
		_hitpoints += amount;
		std::cout	<< "ClapTrap " << _name << " repairs itself for " << amount
			<<" hitpoints. Remaining HP: " << _hitpoints
			<< std::endl;
	}
	else
		std::cout	<< "ClapTrap " << _name << " is already at 0 energy, unable to repair."
					<< std::endl;
}
