#include "ZombieHorde.hpp"

int main(void)
{
    ZombieHorde *ZH = new ZombieHorde(20);

    ZH->announce();

	delete (ZH);
}