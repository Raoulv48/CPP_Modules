#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>

class contact
{
    public:
        contact();
        ~contact();
        
        void set_value();
        void print_search();
        void print_all();
        void set_index(int index);
        bool get_filled();


    private:
        void print_value(std::string str);
        static std::string fieldsNames[11];
        std::string fields[11];
        int index;
        bool filled;
    
};
#endif