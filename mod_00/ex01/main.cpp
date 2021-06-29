#include "contact.hpp"
#include <sstream>

static void search_cmd(contact *lst)
{
    int searchAmount = 0;
	int counter;
	int index;
	std::string indexString;

    for (counter = 0; counter < 8; counter++)
    {
        if (lst[counter].get_filled() == true)
        {
            lst[counter].print_search();
            searchAmount++;
        }
    }
    if (!searchAmount)
    {
        return ;
    }
    searchAmount = 0;
    std::cout << "Select Index: ";
    std::getline(std::cin, indexString);
    if (indexString.size() != 1 || indexString[0] < '0' || indexString[0] > '7')
    {
        std::cout << "Invalid Input!" << std::endl;
        return ;
    }
    else
    {
        std::istringstream(indexString) >> index;
        if (lst[index].get_filled() == true)
            lst[index].print_all();
        else
            std::cout << "Contact is empty!" << std::endl;
    }
}

static void add_cmd(contact *lst)
{
    int counter;

    for (counter = 0; counter < 7; counter++)
    {
        if (lst[counter].get_filled() == false)
            break ;
    }
    if (lst[counter].get_filled() == true)
    {
        std::cout << "No more space in the phonebook!" << std::endl;
		return ;
    }
    lst[counter].set_value();
}

int main(void)
{
    contact lst[8];
    std::string command;

    for (int i = 0; i < 8; i++)
        lst[i].set_index(i);
    
    while (1)
    {
        std::getline(std::cin, command);
        if (command.compare("EXIT") == 0)
            break ;
        if (command.compare("SEARCH") == 0)
            search_cmd(lst);
        if (command.compare("ADD") == 0)
            add_cmd(lst);
    }
}
