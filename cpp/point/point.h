// point.h
#pragma once

#include <iostream>
#include <cmath>

class Point
{
    friend std::ostream& operator<<(std::ostream& out, const Point& inPoint);

public:
    Point();
    Point(double inX, double inY);
    Point(const Point& other);

    void increment(double inNum);

    double pointEqual(const Point& in) const;
    double pointDistance(const Point& in) const;

    void setX(double inX);
    double getX() const;

    void setY(double inY);
    double getY() const;

    Point& operator=(const Point& other);
    Point operator+(const Point& other) const;

    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    Point& operator()(double inX, double inY);

private:
    double x;
    double y;
};

std::ostream& operator<<(std::ostream& out, const Point& inPoint);

// inline std::ostream& operator<<(std::ostream& out, const Point& inPoint)
// {
//    out << "(" << inPoint.getX() << ", " << inPoint.getY() << ")";

//    return out;
// }