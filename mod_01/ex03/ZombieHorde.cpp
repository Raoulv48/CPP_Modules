#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    this->size = N;
	std::srand(std::time(NULL));
	this->zombies = new Zombie[N];
    this->set_names();
    this->nameZombie();
	std::cout << "Construct ZombieHorde" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Deconstruct ZombieHorde" << std::endl;
}

void ZombieHorde::nameZombie()
{
    for (int i = 0; i < this->size; i++)
    {
        int nbr = std::rand()%20;
        zombies[i].setZombieValues(this->names[nbr], "");
    }
}

void ZombieHorde::announce()
{
    for (int i = 0; i < this->size; i++)
        zombies[i].announce("Braaaaaaaaaains!");
}

void    ZombieHorde::set_names()
{
    this->names[0] = "Liam";
    this->names[1] = "Olivia";
    this->names[2] = "Noah";
    this->names[3] = "Emma";
    this->names[4] = "Oliver";
    this->names[5] = "Ava";
    this->names[6] = "William";
    this->names[7] = "Sophia";
    this->names[8] = "Elijah";
    this->names[9] = "Isabella";
    this->names[10] = "James";
    this->names[11] = "Charlotte";
    this->names[12] = "Benjamin";
    this->names[13] = "Amelia";
    this->names[14] = "Lucas";
    this->names[15] = "Mia";
    this->names[16] = "Mason";
    this->names[17] = "Harper";
    this->names[18] = "Ethan";
    this->names[19] = "Evelyn";
}