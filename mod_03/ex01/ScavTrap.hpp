#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();
		void    operator=(ScavTrap const &src);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer();

	private:
		int hp;
		int maxHp;
		int ep;
		int maxEp;
		int lvl;
		std::string name;
		int meleeAttackdmg;
		int rangedAttackdmg;
		int armordmgReduction;
		std::string quotes[5];
};

#endif