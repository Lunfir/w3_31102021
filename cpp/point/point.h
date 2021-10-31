// point.h
#include <iostream>
#include <cmath>

struct Point
{
public:
    void increment(double inNum);

    void pointPrint() const;
    int pointEqual(const Point& in) const;
    double pointDistance(const Point& in) const;

    void setX(double inX);
    double getX() const;

    void setY(double inY);
    double getY() const;

private:
    double x;
    double y;
};