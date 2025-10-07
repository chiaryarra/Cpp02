#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0){
    // Standard constructor
}

Fixed::Fixed(const int value) {
    // Constructor with int parameter
    this->fixed_point = value << this->fract_bits;
}

Fixed::Fixed(const float value) {
    // Constructor with float parameter
    this->fixed_point = roundf(value * (1 << this->fract_bits));
}

Fixed::Fixed(const Fixed& copy) : fixed_point(copy.fixed_point){
    // Copy constructor
}

Fixed& Fixed::operator=(const Fixed &copy) {
    // Copy assignment operator
    if (this != &copy) {
        fixed_point = copy.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed() {
    // Standard destructor
}

bool	Fixed::operator>(const Fixed &other) const {
	bool return_value = this->fixed_point > other.fixed_point;
	return (return_value);
}

bool	Fixed::operator<(const Fixed &other) const {
	bool return_value = this->fixed_point < other.fixed_point;
	return (return_value);
}

bool	Fixed::operator>=(const Fixed &other) const {
	bool return_value = this->fixed_point >= other.fixed_point;
	return (return_value);
}

bool	Fixed::operator<=(const Fixed &other) const {
	bool return_value = this->fixed_point <= other.fixed_point;
	return (return_value);
}

bool	Fixed::operator==(const Fixed &other) const {
	bool return_value = this->fixed_point == other.fixed_point;
	return (return_value);
}

bool	Fixed::operator!=(const Fixed &other) const {
	bool return_value = this->fixed_point != other.fixed_point;
	return (return_value);
}

Fixed	Fixed::operator+(const Fixed &other) const {
	float intermediate_value = (this->toFloat() + other.toFloat());
	return (Fixed(intermediate_value));
}

Fixed	Fixed::operator-(const Fixed &other) const {
	float intermediate_value = (this->toFloat() - other.toFloat());
	return (Fixed(intermediate_value));
}

Fixed	Fixed::operator*(const Fixed &other) const {
	float intermediate_value = (this->toFloat() * other.toFloat());
	return (Fixed(intermediate_value));
}

Fixed	Fixed::operator/(const Fixed &other) const {
	float intermediate_value = (this->toFloat() / other.toFloat());
	return (Fixed(intermediate_value));
}

Fixed&	Fixed::operator++() {
	++fixed_point;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	temp = *this;
	++fixed_point;
	return temp;
}

Fixed&	Fixed::operator--() {
	--fixed_point;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	temp = *this;
	--fixed_point;
	return temp;
}

Fixed&	Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return (a);
	else
		return (b);
}

int Fixed::getRawBits(void) const {
    return (this->fixed_point);
}

void    Fixed::setRawBits(int const raw) {
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