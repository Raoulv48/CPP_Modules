#ifndef SEDISFORLOSERS_HPP
# define SEDISFORLOSERS_HPP

# include <fstream>
# include <string>

class SedIsForLosers
{
    public:
        SedIsForLosers();
        void Replace(char const *file, char const *find, char const *replace);
    
    private:
        std::string file;
        std::string find;
        std::string replace;
        std::ifstream file_in;
        std::ofstream file_out;
};

#endif