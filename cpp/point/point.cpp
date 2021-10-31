// point.cpp
#include "point.h"

void Point::pointPrint() const
{
    std::cout << "(" << this->x << ", " << this->y << ")" << std::endl;
}

int Point::pointEqual(const Point& in) const
{
    return this->x == in.x && this->y == in.y;
}

double Point::pointDistance(const Point& in) const
{
    return hypot(this->x-in.x, this->y-in.y);
}

void Point::increment(double inNum)
{
    this->x += inNum;
    this->y += inNum;
}