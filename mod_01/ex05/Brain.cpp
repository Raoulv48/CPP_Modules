#include "Brain.hpp"

Brain::Brain()
{
}

std::string Brain::identify() const
{
    const void *address = static_cast<const void*>(this);
    std::stringstream ss;
    ss << address;
    std::string addr = ss.str();
    return (addr);
}