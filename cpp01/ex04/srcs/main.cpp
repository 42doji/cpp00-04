#include "SedV2.hpp"

int main(int ac, char **av)
{
	if (ac != 4 && ac != 5)
	{
		std::cerr << "Error: invalid number of arguments" << std::endl;
		return 1;
	}
	SedV2   sed;
	if (ac == 4)
		sed.replace(av[1], av[2], av[3]);
	else if (ac == 5)
		sed.replace(av[1], av[2], av[3], av[4]);
	return 0;
}