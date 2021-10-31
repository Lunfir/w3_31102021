// point.h
#include <iostream>
#include <cmath>

struct Point
{
    double x;
    double y;

    void increment(double inNum);

    void pointPrint() const;
    int pointEqual(const Point& in) const;
    double pointDistance(const Point& in) const;
};