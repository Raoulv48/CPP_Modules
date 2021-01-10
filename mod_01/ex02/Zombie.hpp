#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
public:
	Zombie();
	~Zombie();

	void setType(std::string type);
	void setValues(std::string name, std::string type);
	void announce(std::string msg);
private: 
	std::string name, type;
};

#endif