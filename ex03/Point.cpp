#include "Point.hpp"

Point::Point() : x(0), y(0) {
    // Standard constructor
}

Point::Point(const float x, const float y): x(x), y(y) {
    // Constructor with float parameter
}

Point::Point(const Point& copy) : x(copy.x), y(copy.y) {
    // Copy constructor
}

Point& Point::operator=(const Point &copy) {
    // Copy assignment operator
    (void)copy;
    return (*this);
}

Point::~Point() {
    // Standard destructor
}

Fixed Point::getX() const {
    return this->x;
}

Fixed Point::getY() const {
    return this->y;
}