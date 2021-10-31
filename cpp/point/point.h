// point.h
#pragma once

#include <iostream>
#include <cmath>

class Point
{
    friend std::ostream& operator<<(std::ostream& out, const Point& inPoint);

public:
    Point();
    Point(int inX, int inY);
    Point(const Point& other);

    void increment(int inNum);

    int pointEqual(const Point& in) const;
    int pointDistance(const Point& in) const;

    void setX(int inX);
    int getX() const;

    void setY(int inY);
    int getY() const;

    Point& operator=(const Point& other);
    Point operator+(const Point& other) const;

    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    Point& operator()(int inX, int inY);

private:
    int x;
    int y;
};

std::ostream& operator<<(std::ostream& out, const Point& inPoint);

// inline std::ostream& operator<<(std::ostream& out, const Point& inPoint)
// {
//    out << "(" << inPoint.getX() << ", " << inPoint.getY() << ")";

//    return out;
// }