#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << "Human with the name: " << this->name << " attcks with his " << this->weapon->getType() << std::endl;
}
