#include "SedIsForLosers.hpp"

SedIsForLosers::SedIsForLosers()
{
}

void    SedIsForLosers::Replace(char const *file, char const *find, char const *replace)
{
    std::string line;
    size_t pos;

    this->file = file;
    this->find = find;
    this->replace = replace;

    if (this->find.length() <= 0 || this->replace.length() <= 0)
        throw "Invalid input, use atleast 1 character!";
    file_in.open(this->file.c_str(), std::ios::in);
    if (!file_in.is_open())
        throw "Invalid file!";
    file_out.open(this->file.append(".replace").c_str(), std::ios::out | std::ios::trunc);
    if (!file_out.is_open())
        throw "Error creating the file!";
    
    while (file_in.good())
    {
        std::getline(file_in, line);
        pos = line.find(this->find);
        
        while (pos != std::string::npos)
        {
            if (line[pos + this->find.length()] == ' ' || line[pos + this->find.length()] == '\0')
            {
                std::string templine = line.substr(0, pos);
                templine += this->replace;
                templine += line.substr(pos + this->find.length(), line.length());
                line = templine;
            }
            pos = line.find(this->find, pos + this->replace.length());
        }
        file_out << line;
        if (file_in.good())
            file_out << std::endl;
    }
    file_in.close();
    file_out.close();
}
