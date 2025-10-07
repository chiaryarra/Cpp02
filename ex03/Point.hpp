#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class	Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
	Point();
	Point(const float x, const float y);
    Point(const Point& copy);
	Point& operator=(const Point& copy);
	~Point();
	Fixed	getX() const;
	Fixed	getY() const;
};


#endif