#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "DEFAULT";
	_hitpoints = 100;
	_energypoints = 100;
	_attackdmg = 30;
	std::cout << "FragTrap default constructor is called: " << _name << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hitpoints = 100;
	_energypoints = 100;
	_attackdmg = 30;
	std::cout << "FragTrap named constructor is called: " << _name << std::endl;
}

FragTrap::FragTrap(FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor is called." << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(FragTrap& copy)
{
	std::cout << "FragTrap copy assignment operator is called."<< std::endl;
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_energypoints = copy._energypoints;
	_attackdmg = copy._attackdmg;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor is called." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap says high five guys!" << std::endl;
}
