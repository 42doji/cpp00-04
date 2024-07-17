#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int main( void )
{
	DiamondTrap diamond("Doji");
	DiamondTrap diamond2("Doji2");
	DiamondTrap diamond3("Doji3");

	diamond.whoAmI();
	diamond2.whoAmI();
	diamond3.whoAmI();
	diamond3 = diamond2;
	diamond3.whoAmI();
	diamond3 = diamond;
	diamond3.whoAmI();

	diamond.attack("elon musk");
	diamond.takeDamage(10);
	diamond.beRepaired(10);
	diamond.whoAmI();

	return EXIT_SUCCESS;
}