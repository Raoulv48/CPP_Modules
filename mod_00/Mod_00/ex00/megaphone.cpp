#include <iostream>

int main(int av, char **agc)
{
    if (av == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for(int i = 1; i < av; i++)
            for (int j = 0; agc[i][j] != '\0'; j++)
            std::cout << (char)std::toupper(agc[i][j]);
        std::cout << std::endl;
    }
}
