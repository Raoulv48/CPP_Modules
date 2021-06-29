#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap ft1("IT54-TP");
    FragTrap ft2("HOU5E-TP");
    FragTrap ft3(ft1);
    
    ft1.meleeAttack("Handsome Jack");
    ft2.rangedAttack("Handsome Jack");
    ft1.takeDamage(105);
    ft2.takeDamage(43);
    ft1.beRepaired(120);
    ft2.beRepaired(55);
    ft2.vaulthunter_dot_exe("Handsome Jack!");
    ft2.vaulthunter_dot_exe("Handsome Jack!");
    ft2.vaulthunter_dot_exe("Handsome Jack!");
    ft2.vaulthunter_dot_exe("Handsome Jack!");
    ft2.vaulthunter_dot_exe("Handsome Jack!");
    ft2 = ft1;

    std::cout << std::endl;
    
    ScavTrap st1("SCAVY-TP");
    st1.meleeAttack("Looter");
    st1.rangedAttack("Beserker");
    st1.takeDamage(11);
    st1.beRepaired(3);
    st1.challengeNewcomer();
    st1.challengeNewcomer();
    st1.challengeNewcomer();

    return (0);
}