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
		int     toInt(void) const;
		float   toFloat(void) const;
		int     getRawBits(void) const;
		void    setRawBits(int const raw);
		Fixed	&operator=(Fixed const &src);
		bool    operator>(Fixed const &src) const;
		bool	operator<(Fixed const &src) const;
		bool	operator>=(Fixed const &src) const;
		bool	operator<=(Fixed const &src) const;
		bool	operator==(Fixed const &src) const;
		bool	operator!=(Fixed const &src) const;
		const   Fixed operator+(Fixed const &src) const;
		const   Fixed operator-(Fixed const &src) const;
		const   Fixed operator--(int);
		const   Fixed &operator--();
		const   Fixed operator++(int);
		const   Fixed &operator++();
		const   Fixed operator/(Fixed const &src) const;
		const   Fixed operator*(Fixed const &src) const;
		const	Fixed &min(const Fixed &a, const Fixed &b) const;
		Fixed	&min(Fixed &a, Fixed &b);
		Fixed	&max(Fixed &a, Fixed &b);
		const	Fixed &max(const Fixed &a, const Fixed &b) const;

	private:
		int _value;
		static const int _bits = 8;
};

std::ostream& operator<<(std::ostream& out, Fixed const& src);

#endif
