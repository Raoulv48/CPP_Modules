#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{
    public:
        Fixed();
        Fixed(Fixed &src);
        ~Fixed();
        void    operator=(Fixed &src);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

    private:
        int value;
        static const int bits = 8;
};

#endif
