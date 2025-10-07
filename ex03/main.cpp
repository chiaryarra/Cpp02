#include <iostream>
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const p);

int main() {
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point p1(3, 3);
    Point p2(0, 5); 
    Point p3(6, 6);

    std::cout << "p1 inside: " << bsp(a, b, c, p1) << std::endl;
    std::cout << "p2 inside: " << bsp(a, b, c, p2) << std::endl;
    std::cout << "p3 inside: " << bsp(a, b, c, p3) << std::endl;

    return 0;
}
