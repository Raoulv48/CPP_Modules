#include "Zombie.hpp"


static std::string *set_names(std::string *names)
{
	names[0] = "Emma";
	names[1] = "Olivia";
	names[2] = "Ava";
	names[3] = "Isabella";
	names[4] = "Sophia";
	names[5] = "Charlotte";
	names[6] = "Mia";
	names[7] = "Amelia";
	names[8] = "Harper";
	names[9] = "Evelyn";
	names[10] = "Liam";
	names[11] = "Noah";
	names[12] = "William";
	names[13] = "James";
	names[14] = "Oliver";
	names[15] = "Benjamin";
	names[16] = "Elijah";
	names[17] = "Lucas";
	names[18] = "Mason";
	names[19] = "Logan";

	return (names);
}

Zombie* zombieHorde( int N, std::string name )
{
	std::string names[20];
	set_names(names);
	Zombie *zombies = new Zombie[N]();

	zombies[0].setName(name);
	for (int i = 1 ; i < N; i++)
	{
		int random = std::rand () % 20;
		zombies[i].setName(names[random]);
	}

	return (&zombies[0]);
}
