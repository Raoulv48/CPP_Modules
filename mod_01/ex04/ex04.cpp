#include <iostream>

int main(void)
{
    std::string string("HI THIS IS BRAIN");
    std::string *pointer = &string;
    std::string& refrence = string;
    std::cout << string << std::endl;
    std::cout << *pointer << std::endl;
    std::cout << refrence << std::endl;
}