#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap();
	DiamondTrap Diamond("DIO");
	Diamond.takeDamage(69);
	Diamond.attack("MARK");
	Diamond.beRepaired(5);
	Diamond.whoAmI();

	DiamondTrap Diamond2("TWO");
	Diamond2 = Diamond;
	Diamond2.takeDamage(30);

	DiamondTrap Diamond3(Diamond2);
	Diamond3.beRepaired(20);
}