#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0){
    // Standard constructor
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) : fixed_point(copy.fixed_point){
    // Copy constructor
    std::cout << "Copy Constructor Called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &copy) {
    // Copy assignment operator
    std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &copy) {
        fixed_point = copy.fixed_point;
    }
    return (*this);
}

Fixed::~Fixed() {
    // Standard destructor
    std::cout << "Destructor Called" << std::endl;
}