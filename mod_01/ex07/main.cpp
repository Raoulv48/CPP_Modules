#include "SedIsForLosers.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    SedIsForLosers SED;
    if (argc != 4)
    {
        std::cerr << "Invallid amount of arguments" << std::endl;
        return (1);
    }
    try
    {
        SED.Replace(argv[1], argv[2], argv[3]);
    }
    catch(char const error)
    {
        std::cerr << error << '\n';
        return (1);
    }
    return (0);
}
