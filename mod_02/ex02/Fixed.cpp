#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(int const _value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_value = _value << this->_bits;
}

Fixed::Fixed(float const _value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(_value * (1 << this->_bits));
}

Fixed::Fixed(Fixed const &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int     Fixed::toInt(void) const
{
	int res;
	
	res = this->_value >> this->_bits;
	return (res);
}

float   Fixed::toFloat(void) const
{
	float res;

	res = (float)this->_value / (float)(1 << this->_bits);
	return (res);
}

int     Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void    Fixed::setRawBits(int const raw)
{
	// std::cout << "setRaw_Bits member function called" << std::endl;
	this->_value = raw;
}

std::ostream& operator<<(std::ostream& out, Fixed const& src)
{
	out << src.toFloat();
	return (out);
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	// std::cout << "Assignation opperator called" << std::endl;
	if (this == &src)
		return (*this);
	this->_value = src.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const &src) const
{
	return (this->_value > src.getRawBits());
}

bool	Fixed::operator<(Fixed const &src) const
{
	return (this->_value < src.getRawBits());
}

bool	Fixed::operator>=(Fixed const &src) const
{
	return (this->_value >= src.getRawBits());
}

bool	Fixed::operator<=(Fixed const &src) const
{
	return (this->_value <= src.getRawBits());
}

bool	Fixed::operator==(Fixed const &src) const
{
	return (this->_value == src.getRawBits());
}

bool	Fixed::operator!=(Fixed const &src) const
{
	return (this->_value != src.getRawBits());
}

const	Fixed Fixed::operator+(Fixed const &src) const
{
	Fixed temp;
	temp.setRawBits(this->_value + src.getRawBits());
	return (temp);
}

const	Fixed Fixed::operator-(Fixed const &src) const
{
	Fixed temp;
	temp.setRawBits(this->_value - src.getRawBits());
	return (temp);
}

const Fixed Fixed::operator*(Fixed const &src) const
{
	Fixed temp;
	temp.setRawBits((this->_value * src._value) >> this->_bits);
	return (temp);
}

const Fixed Fixed::operator/(Fixed const &src) const
{
	Fixed temp;
	temp.setRawBits((this->_value << this->_bits) / src._value);
	return (temp);
}

const Fixed &Fixed::operator++()
{
   this->_value += 1;
   return (*this);
}

const Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return (old);
}

const Fixed &Fixed::operator--()
{
	this->_value -= 1;
	return (*this);
}

const Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return (old);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const	Fixed &Fixed::min(const Fixed &a, const Fixed &b) const
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const	Fixed &Fixed::max(const Fixed &a, const Fixed &b) const
{
	if (a < b)
		return (a);
	return (b);
}
