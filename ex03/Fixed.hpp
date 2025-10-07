#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int					fixed_point;
    static const int	fract_bits = 8;
public:
	// Orthodox Canonical Form
    
	Fixed();
    Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed& copy);
	~Fixed();
	
	// Constructors with parameters

	Fixed(const int value);
	Fixed(const float value);
	
	
	// Operator overloads
	
	// Comparison
	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
    bool	operator<=(const Fixed &other) const;
    bool	operator==(const Fixed &other) const;
    bool	operator!=(const Fixed &other) const;
	// Aritmethic
	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;
	// Inclement/Declement
	Fixed&	operator++(); // prefix
	Fixed	operator++(int); // sufix
	Fixed&	operator--();
	Fixed	operator--(int);
	
	// Min and Max (class member function overload)
	
	static Fixed&	min(Fixed &a, Fixed &b);
	static const Fixed&	min(const Fixed &a, const Fixed &b);
	static Fixed&	max(Fixed &a, Fixed &b);
	static const Fixed& max(const Fixed &a, const Fixed &b);

	// Class members functions
	
	int 	getRawBits(void) const;
	void	setRawBits(int const raw); 
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif