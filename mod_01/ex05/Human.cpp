#include "Brain.hpp"
#include "Human.hpp"

Human::Human()
{
}

const Brain& Human::getBrain()
{
    return (brain);
}

std::string Human::identify()
{
    return (brain.identify());
}