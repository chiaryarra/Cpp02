#include "Point.hpp"
#include <iostream>

static Fixed triangleArea(Point const &a, Point const &b, Point const &c) {
    Fixed temp1 = a.getX() * (b.getY() - c.getY());
	Fixed temp2 = b.getX() * (c.getY() - a.getY());
	Fixed temp3 = c.getX() * (a.getY() - b.getY());
	Fixed area = (temp1 + temp2 + temp3) / Fixed(2);
    if (area < 0)
        area = area * Fixed(-1);
    return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const p) {
	Fixed areaABC = triangleArea(a, b, c);
	Fixed areaAPC = triangleArea(a, p, c);
	Fixed areaABP = triangleArea(a, b, p);
	Fixed areaPBC = triangleArea(p, b, c);

	if (areaABP == 0 || areaAPC == 0 || areaPBC == 0)
		return (false);
	if (areaABC == areaABP + areaAPC + areaPBC)
		return (true);
	else
		return (false);
}