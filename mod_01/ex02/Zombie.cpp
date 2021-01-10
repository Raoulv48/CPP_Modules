#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
    std::cout << "Zombie: " << this->name << " of type: " << this->type << " is dead" << std::endl;
}

void    Zombie::setValues(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}

void    Zombie::setType(std::string type)
{
    this->type = type;
}

void    Zombie::announce(std::string msg)
{
	std::cout << "<" << this->name << " (" << this->type << ")> " << msg << std::endl;
}