#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap();
		void    operator=(FragTrap const &src);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const &target);

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