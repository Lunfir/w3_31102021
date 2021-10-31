#include <iostream>

#include "point.h"

int main()
{
    Point pointA, pointB;

    pointA.x = 1.23;
    pointA.y = 2.12;

    pointA.pointPrint();
    pointB.pointPrint();

    std::cout   << "is equal: " 
                << pointA.pointEqual(pointB) << std::endl;

    pointB.increment(23);
    pointB.pointPrint();

    return 0;
}