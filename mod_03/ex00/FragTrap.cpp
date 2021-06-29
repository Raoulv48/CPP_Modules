#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hp = 100;
	this->maxHp = 100;
	this->ep = 100;
	this->maxEp = 100;
	this->lvl = 1;
	this->meleeAttackdmg = 30;
	this->rangedAttackdmg = 20;
	this->armordmgReduction = 5;
	std::srand(std::time(NULL));
	this->quotes[0] = " Hey everybody! Check out my package!";
	this->quotes[1] = " Recompiling my combat code!";
	this->quotes[2] = " Where'd all my bullets go?";
	this->quotes[3] = " Wow, did I really do that?";
	this->quotes[4] = " Times like these, I really start to question the meaning of my existence. Then I get distra-hey! What's this? This looks cool!";
}

FragTrap::FragTrap(FragTrap const &src)
{
    std::cout << "Hahahahaha! I'm alive!" << std::endl;
    *this = src;
}

FragTrap::~FragTrap()
{
    std::cout << "I'm too pretty to die!" << std::endl;
}

void    FragTrap::operator=(FragTrap const &src)
{
    std::cout << "Does this mean I can start dancing? Pleeeeeeaaaaase?" << std::endl;
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << "with a gun, dealing " << this->rangedAttackdmg << " points of damage!" << " Hahah, do you see the ligt?" <<std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << "with a teddybear, dealing " << this->meleeAttackdmg << " points of damage!" << " Hahah, do you feel the dust going in to your hardware?" <<std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if ((int)amount - this->armordmgReduction < 0)
		return ;
	if (this->hp - ((int)amount - this->armordmgReduction) <= 0)
	{
		this->hp = 0;
		std::cout << this->name << " This could've gone better!" << std::endl;
	}
	else
	{
		this->hp -= ((int)amount - this->armordmgReduction);
		std::cout << this->name << " I'll stop talking when I'm dead!" << std::endl;
	}
    std::cout << this->name << " has " << this->hp << " Health left" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->hp + (int)amount > this->maxHp)
		this->hp = this->maxHp;
	else
		this->hp += (int)amount;
	std::cout << this->name << " Holy crap, that worked?" << std::endl;
	std::cout << this->name << " has " << this->hp << " Health left" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->ep < 25)
	{
		std::cout << "Uhoh, I need more FUEL!!!" << std::endl;
		return ;
	}
	std::cout << target << this->quotes[std::rand() % 5] << std::endl;
	this->ep -= 25;
}