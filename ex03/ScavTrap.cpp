#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "DEFAULT";
	_hitpoints = 100;
	_energypoints = 50;
	_attackdmg = 20;
	std::cout << "ScavTrap default constructor is called: " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hitpoints = 100;
	_energypoints = 50;
	_attackdmg = 20;
	std::cout << "ScavTrap named constructor is called: " << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor is called." << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(ScavTrap& copy)
{
	std::cout << "ScavTrap copy assignment operator is called."<< std::endl;
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_energypoints = copy._energypoints;
	_attackdmg = copy._attackdmg;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor is called." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energypoints > 0)
	{
		_energypoints -= 1;
		std::cout	<< "ScavTrap " << _name << " attacks " << target
					<< ", causing " << _attackdmg << " points of damage!" << std::endl;
	}
	else
		std::cout	<< "ScavTrap " << _name << " is already at 0 energy, unable to attack."
					<< std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
