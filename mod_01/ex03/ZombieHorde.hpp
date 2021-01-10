#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class ZombieHorde{
public:
	ZombieHorde(int N);
	~ZombieHorde();
	
	void announce();

private:
	void nameZombie();
	void set_names();
	Zombie *zombies;
	std::string names[20];
    int size;
};


#endif