
#include "Zombie.hpp"

#define N 4

int main( void ) {
	Zombie *zombiz = ZombieHorde(N, "zombi");

	for (size_t i = 0; i < N; i++) {
		zombiz[i].setName("zombi" + std::to_string(i));
		zombiz[i].announce();
	}

	delete [] zombiz;
	return 0;
}