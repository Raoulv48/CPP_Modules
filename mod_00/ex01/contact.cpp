#include "contact.hpp"

contact::contact()
{
    filled = false;
}

contact::~contact()
{
}

std::string contact::fieldsNames[11] = {
	"First Name", "Last Name", "Nickname", "Login",
	"Postal Address", "Email", "Phone Number", "Birthday Date",
	"Favorite Meal", "Underwear Color", "Darkest Secret"};

void    contact::set_value()
{
    std::string input;
    for (int i = 0; i < 11; i++)
    {
        std::cout << fieldsNames[i] << ": ";
        std::getline(std::cin, input);
        while(!input.compare(""))
        {
            std::cout << "Invalid Input!" << std::endl;
            std::cout << fieldsNames[i] << ": ";
            std::getline(std::cin, input);
        }
        fields[i] = input;
    }
    filled = true;
}

void contact::print_search()
{
    std::cout << std::setw(10) << std::right << std::setfill(' ') << index;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "|";
        if (fields[i].length() > 10)
            std::cout << fields[i].substr(0, 9) + ".";
        else
            std::cout << std::setw(10) << std::right << std::setfill(' ') << fields[i];
    }
    std::cout << std::endl;
}

void contact::print_all()
{
	for (int i = 0; i < 11; i++)
		std::cout << fieldsNames[i] << ": " << fields[i] << std::endl;
}

void    contact::set_index(int index)
{
    this->index = index;
}

bool    contact::get_filled()
{
    return (this->filled);
}