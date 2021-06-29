#include "Zombie.hpp"



int main(void)
{
	Zombie *zombie;
	
	zombie = zombieHorde(20, "John");
	for(int i = 0 ; i < 20; i++)
	{
		zombie->announce();
		zombie++;
	}
	zombie--;
	for (int i = 0 ; i < 20 ; i++)
	{
		zombie->~Zombie();
		zombie--;
	}
	zombie++;
	delete [] zombie;
	// system ("leaks Zombies");
}
