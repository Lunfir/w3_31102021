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

void Point::setX(double inX)
{
    if (inX >= 0)
    {
        this->x = inX;
    }
}
void Point::setY(double inY)
{
    this->y = inY;
}

double Point::getX() const
{
    return this->x;
}

double Point::getY() const
{
    return this->y;
}