#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

class Karen
{
    public:
        Karen();
        ~Karen();
        void complain( std::string level );

    private:
        typedef struct s_func
        {
            std::string name;
            void (Karen::*f)();
        }   t_func;
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        t_func _funcs[4];
};

#endif
