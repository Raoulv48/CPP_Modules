#include "Karen.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid number of arguments!" << std::endl;
		return(0);
	}
	Karen karen;
	std::string level(argv[1], strlen(argv[1]));
	karen.complain(level);
}
