#include "FragTrap.hpp"

int	main(void)
{
	FragTrap Frag("FRAGY");
	Frag.takeDamage(69);
	Frag.attack("MARK");
	Frag.beRepaired(5);
	Frag.highFivesGuys();

	FragTrap Frag2("TWO");
	Frag2 = Frag;
	Frag2.takeDamage(30);

	FragTrap Frag3(Frag2);
	Frag3.beRepaired(20);
}