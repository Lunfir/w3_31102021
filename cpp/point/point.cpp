// point.cpp
#include "point.h"

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

Point& Point::operator=(const Point& other)
{
    this->x = other.x;
    this->y = other.y;

    return *this;
}

Point Point::operator+(const Point& other) const
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    Point out;

    out.x = this->x + other.x;
    out.y = this->y + other.y;

    return out;
}

bool Point::operator==(const Point& other) const
{
    return this->x == other.x && this->y == other.y;
}

bool Point::operator!=(const Point& other) const
{
    return !(*this == other);
    // return !this->operator==(other);
}

Point& Point::operator()(double inX, double inY)
{
    this->x += inX;
    this->y += inY;

    return *this;
}

std::ostream& operator<<(std::ostream& out, const Point& inPoint)
{
   out << "(" << inPoint.x << ", " << inPoint.y << ")";

   return out;
}
