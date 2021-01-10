#include "Pony.hpp"

void    ponyOnTheStack()
{
    Pony pony;
    pony.print();
    pony.remove_tail();
    std::cout << "tail is removed" << std::endl;
    pony.print();
}

void    ponyOnTheHeap()
{
    Pony *pony = new Pony();

    pony->print();
    pony->remove_tail();
    std::cout << "tail is removed" << std::endl;
    pony->print();

    delete (pony);
}

int     main(void)
{
    std::cout << "on the stack" << std::endl;
    ponyOnTheStack();
    std::cout << "on the heap" << std::endl;
    ponyOnTheHeap();
}
