#include "Pony.hpp"

Pony::Pony() 
{
    this->tail = 1;
    std::cout << "Pony with a tail " << "has come to existance" << std::endl;
}

Pony::~Pony()
{
    std::cout << "Pony without a tail " << "has been murderd" << std::endl;
}

void    Pony::print()
{
    if (this->tail == 1)
        std::cout << "this pony has a tail" << std::endl;
    else
        std::cout << "this pony has no tail" << std::endl;
}

void    Pony::remove_tail()
{
    if (this->tail == 0)
        return ;
    else
        this->tail -= 1;
}