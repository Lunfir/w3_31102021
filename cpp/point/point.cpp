// point.cpp
#include "point.h"

Point::Point()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->x = 0;
    this->y = 0;
}

Point::Point(int inX, int inY)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->x = inX;
    this->y = inY;
}

Point::Point(const Point& other)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->x = other.x;
    this->y = other.y;
}

int Point::pointEqual(const Point& in) const
{
    return this->x == in.x && this->y == in.y;
}

int Point::pointDistance(const Point& in) const
{
    return hypot(this->x-in.x, this->y-in.y);
}

void Point::increment(int inNum)
{
    this->x += inNum;
    this->y += inNum;
}

void Point::setX(int inX)
{
    if (inX >= 0)
    {
        this->x = inX;
    }
}
void Point::setY(int inY)
{
    this->y = inY;
}

int Point::getX() const
{
    return this->x;
}

int Point::getY() const
{
    return this->y;
}

Point& Point::operator=(const Point& other)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->x = other.x;
    this->y = other.y;

    return *this;
}

Point Point::operator+(const Point& other) const
{
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

Point& Point::operator()(int inX, int inY)
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
