// g++ -c point.cpp -o point.o && g++ point.o main.cpp && ./a.exe

#include <iostream>

#include "point.h"

int main()
{
    // default constructor / constructor without arguments
    // Point pointA;
    // pointA.setX(42);
    // pointA.setY(42);

    // assignment operator
    // Point pointA = Point(12, 2); // Point pointA(12, 2);
    // Point pointB = Point(4, 4);  // Point pointB(4, 4);
    // pointB = pointA;             // pointB.operator=(pointA);

    // copy constructor
    Point pointA = Point(12, 2);    // Point pointA(12, 2);
    Point pointB = pointA;          // Point pointB(pointA);

    std::cout << pointA << std::endl;

    return 0;
}