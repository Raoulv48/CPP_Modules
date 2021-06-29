#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hp = 100;
	this->maxHp = 100;
	this->ep = 50;
	this->maxEp = 50;
	this->lvl = 1;
	this->meleeAttackdmg = 20;
	this->rangedAttackdmg = 15;
	this->armordmgReduction = 3;
	std::srand(std::time(NULL));
	this->quotes[0] = "Hehehehe, mwaa ha ha ha, MWAA HA HA HA!";
	this->quotes[1] = "Unts unts unts unts!";
	this->quotes[2] = "Ha! Keep 'em coming!";
	this->quotes[3] = "I am a tornado of death and bullets!";
	this->quotes[4] = "Stop me before I kill again, except don't!";
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    std::cout << "Here we go again!" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Good thing I don't have a soul!" << std::endl;
}

void    ScavTrap::operator=(ScavTrap const &src)
{
    std::cout << "Care to have a friendly duel?" << std::endl;
    this->name = src.name;
	this->hp = src.hp;
	this->maxHp = src.maxHp;
	this->ep = src.ep;
	this->maxEp = src.maxEp;
	this->lvl = src.lvl;
	this->meleeAttackdmg = src.meleeAttackdmg;
	this->rangedAttackdmg = src.rangedAttackdmg;
	this->armordmgReduction = src.armordmgReduction;
	std::cout << "now it's " << this->name << " turn" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "ScavTrap " << this->name << " attacks " << target << "with a gun, dealing " << this->rangedAttackdmg << " points of damage!" << " Don't ask me where this ammo's coming from" <<std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap " << this->name << " attacks " << target << "with a claw, dealing " << this->meleeAttackdmg << " points of damage!" << " If I had veins, they'd be popping out right now!" <<std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if ((int)amount - this->armordmgReduction < 0)
		return ;
	if (this->hp - ((int)amount - this->armordmgReduction) <= 0)
	{
		this->hp = 0;
		std::cout << this->name << " Ow hohoho, that hurts! Yipes!" << std::endl;
	}
	else
	{
		this->hp -= ((int)amount - this->armordmgReduction);
		std::cout << this->name << " My robotic flesh! AAHH!" << std::endl;
	}
    std::cout << this->name << " has " << this->hp << " Health left" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hp + (int)amount > this->maxHp)
		this->hp = this->maxHp;
	else
		this->hp += (int)amount;
	std::cout << this->name << " I didn't panic! Nope, not me!" << std::endl;
	std::cout << this->name << " has " << this->hp << " Health left" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
    std::cout << "Hold it there newcomer! First you must pass a challenge: " << std::endl;
    std::cout << this->quotes[std::rand() % 5] << std::endl;
}