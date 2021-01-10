#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class ZombieEvent{
public:
	ZombieEvent();
	~ZombieEvent();
	
	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	Zombie* randomChump();

private:
	void set_names();
	std::string type;
	std::string names[20];
};


#endif