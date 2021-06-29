#include "FragTrap.hpp"

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

    return (0);
}