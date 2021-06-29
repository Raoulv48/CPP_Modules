#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
    public:
        Fixed();
        Fixed(int const value);
        Fixed(float const value);
        Fixed(Fixed const &src);
        ~Fixed();
        void    operator=(Fixed const &src);
        int     toInt(void) const;
        float   toFloat(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

    private:
        int value;
        static const int bits = 8;
};

std::ostream& operator<<(std::ostream& out, Fixed const& src);

#endif
