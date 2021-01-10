#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {
public:
        Pony();
        ~Pony();
        void    remove_tail();
        void    print();

private:
        int tail;

};

#endif