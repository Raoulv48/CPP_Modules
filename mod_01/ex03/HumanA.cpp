#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): weapon(weapon)
{
    this->name = name;
}

void HumanA::attack()
{
    std::cout << "Human with the name: " << this->name << " attcks with his " << this->weapon.getType() << std::endl;
}
