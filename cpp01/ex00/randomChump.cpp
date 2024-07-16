#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	zombie(name, "random");
	zombie.announce();
}