#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
	// Class methods
	int 	getRawBits(void) const;
	void	setRawBits(int const raw); 
};

#endif