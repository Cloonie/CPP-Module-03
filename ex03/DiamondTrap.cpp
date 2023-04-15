#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_name = "DEFAULT";
	_hitpoints = 100;
	_energypoints = 50;
	_attackdmg = 30;
	ClapTrap::_name = _name + "_clap_name";
	std::cout << "DiamondTrap default constructor is called: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	_hitpoints = 100;
	_energypoints = 50;
	_attackdmg = 30;
	ClapTrap::_name = _name + "_clap_name";
	std::cout << "DiamondTrap named constructor is called: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap copy constructor is called." << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& copy)
{
	std::cout << "DiamondTrap copy assignment operator is called."<< std::endl;
	ClapTrap::_name = copy._name + "_clap_name";
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_energypoints = copy._energypoints;
	_attackdmg = copy._attackdmg;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor is called." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}