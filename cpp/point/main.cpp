// g++ -c point.cpp -o point.o && g++ point.o main.cpp && ./a.exe

#include <iostream>

#include "point.h"

int main()
{
    Point pointA, pointB;

    pointA.setX(1.23);
    pointA.setY(2.12);

    pointA.pointPrint();
    pointB.pointPrint();

    std::cout   << "is equal: " 
                << pointA.pointEqual(pointB) << std::endl;

    pointB.increment(23);

    pointB.setX(43);
    pointB.pointPrint();

    return 0;
}