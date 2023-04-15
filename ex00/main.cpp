#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap("INSTANT"); // constructs and destructs instantly as it doesnt create an object
	ClapTrap obj; // constructs and only destructs end of program
	ClapTrap test("TEST"); // constructs with a name and only destructs end of program

	test.attack("MARK");
	test.takeDamage(5);
	test.beRepaired(2);
	obj = test;
	obj.takeDamage(8);
	for (int i = 0; i < 10; i++)
		obj.attack("MARK");
	obj.takeDamage(1);
	ClapTrap copy(test);
}