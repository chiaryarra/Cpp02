#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0){
    // Standard constructor
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const int value) {
    // Constructor with int parameter
    std::cout << "Constructor with int parameter called" << std::endl;
    this->fixed_point = value << this->fract_bits;
}

Fixed::Fixed(const float value) {
    // Constructor with float parameter
    std::cout << "Constructor with float parameter called" << std::endl;
    this->fixed_point = roundf(value * (1 << this->fract_bits));
}

Fixed::Fixed(const Fixed& copy) : fixed_point(copy.fixed_point){
    // Copy constructor
    std::cout << "Copy Constructor Called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &copy) {
    // Copy assignment operator
    std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &copy) {
        fixed_point = copy.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed() {
    // Standard destructor
    std::cout << "Destructor Called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point = raw;
}

float Fixed::toFloat(void) const {
    return (this->fixed_point/(float)(1 << this->fract_bits));
}

int Fixed::toInt(void) const {
    return (this->fixed_point >> this->fract_bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return (out);
}