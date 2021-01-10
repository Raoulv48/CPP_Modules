int main()
{
    {
        Weaponclub = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();club.setType("some other type of club");
        bob.attack();
    }
    {
        Weaponclub = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}