#include "Karen.hpp"

Karen::Karen()
{
    _funcs[0].name = "DEBUG";
    _funcs[1].name = "INFO";
    _funcs[2].name = "WARNING";
    _funcs[3].name = "ERROR";
}
Karen::~Karen()
{

}

void Karen::complain( std::string level )
{
    int i = 0;
    for( ; i < 4; i++)
    {
        if (_funcs[i].name == level)
            break;
    }
    switch(i)
    {
        default:
            std::cout << "[ Propably complaining about insignificant problems ]" << std::endl;
			break;
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
			debug();
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			info();
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			warning();
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			error();
			break;
    }
}

void Karen::debug( void )
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void Karen::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}
