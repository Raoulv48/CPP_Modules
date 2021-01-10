#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "";
	std::cout << "Construct ZombieEvent" << std::endl;
	this->set_names();
	std::srand(std::time(NULL));
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "Deconstruct ZombieEvent" << std::endl;
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie = new Zombie();
    zombie->setValues(name, this->type);
    return (zombie);
}

Zombie* ZombieEvent::randomChump()
{
    int nbr = std::rand()%20;
    Zombie *zombie = this->newZombie(this->names[nbr]);
    zombie->announce("Braaaaaaaaaains!");
	return (zombie); 
}

void    ZombieEvent::set_names()
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