#include <iostream>

int main(void)
{
    std::string name = "HI THIS IS BRAIN";
    std::string *pointer = &name;
    std::string& refrence = name;

    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}