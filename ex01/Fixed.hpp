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
	Fixed(const int value);
	Fixed(const float value);
    Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed& copy);
	~Fixed();
	// Class methods
	int 	getRawBits(void) const;
	void	setRawBits(int const raw); 
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif