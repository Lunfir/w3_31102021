// g++ -c point.cpp -o point.o && g++ point.o main.cpp && ./a.exe

#include <iostream>

#include "point.h"

int main()
{
    Point pointA, pointB, pointRes;

    pointA.setX(12);
    pointA.setY(12);

    pointB.setX(3);
    pointB.setY(3);

    if (pointA == pointB)
    {
        std::cout << "Equal" << std::endl;
    }

    if (pointA != pointB)
    {
        std::cout << "Non equal" << std::endl;
    }

    pointRes = pointA + pointB;
    // pointRes = pointA.operator+(pointB);

    std::cout << pointRes << std::endl;

    pointRes(2, 5);
    std::cout << pointRes << std::endl;

    return 0;
}