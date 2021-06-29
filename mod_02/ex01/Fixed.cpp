#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << this->bits;
}

Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << this->bits));
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void    Fixed::operator=(Fixed const &src)
{
    std::cout << "Assignation opperator called" << std::endl;
    this->value = src.getRawBits();
}

int     Fixed::toInt(void) const
{
    int res;
    
    res = this->value >> this->bits;
    return (res);
}

float   Fixed::toFloat(void) const
{
    float res;

    res = (float)this->value / (float)(1 << this->bits);
    return (res);
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

std::ostream& operator<<(std::ostream& out, Fixed const& src)
{
    out << src.toFloat();
    return (out);
}
