#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent *Ev1 = new ZombieEvent();
    ZombieEvent *Ev2 = new ZombieEvent();

    Ev1->setZombieType("Mage");
    Ev1->setZombieType("Knight");

    Zombie *zombies1[20];
    Zombie *zombies2[5];

    for (int i = 0; i < 18; i++)
        zombies1[i] = Ev1->randomChump();
    
    zombies1[18] = Ev1->newZombie("Henk");
    zombies1[19] = Ev1->newZombie("Ingrid");

    zombies1[18]->announce("Fleeessshhh");
    zombies1[19]->announce("Beeeerrrrr");

    for (int i = 0; i < 5; i++)
        zombies2[i] = Ev2->randomChump();
    
    std::cout << "all zombies have been spawned, and trying to look usefull" << std::endl;

    for(int i = 0; i < 20; i++)
		delete (zombies1[i]);

	for(int i = 0; i < 5; i++)
		delete (zombies2[i]);
	
	std::cout << "No zombies excist anymore!" << std::endl;

	delete (Ev1);
	delete (Ev2);
}