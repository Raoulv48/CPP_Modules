#include "Karen.hpp"

Karen::Karen()
{
    _funcs[0].name = "debug";
    _funcs[1].name = "info";
    _funcs[2].name = "warning";
    _funcs[3].name = "error";
    _funcs[0].f = &Karen::debug;
    _funcs[1].f = &Karen::info;
    _funcs[2].f = &Karen::warning;
    _funcs[3].f = &Karen::error;
}
Karen::~Karen()
{

}

void Karen::complain( std::string level )
{
    for(int i = 0; i < 4; i++)
    {
        if (_funcs[i].name == level)
            (this->*(this->_funcs[i].f))();
    }
}

void Karen::debug( void )
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
