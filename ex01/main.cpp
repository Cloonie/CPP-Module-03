#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scav("SCAVY");
	scav.takeDamage(69);
	scav.attack("MARK");
	scav.beRepaired(5);
	scav.guardGate();

	ScavTrap scav2("TWO");
	scav2 = scav;
	scav2.takeDamage(30);

	ScavTrap scav3(scav2);
	scav3.beRepaired(20);
}