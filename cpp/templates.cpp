#include <iostream>

void foo(int a)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void foo(double a)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

// int sum(int a = 0, int b = 0)
// {
//     std::cout << __PRETTY_FUNCTION__ << std::endl;
//     return a + b;
// }

// float sum(float a, float b)
// {
//     std::cout << __PRETTY_FUNCTION__ << std::endl;
//     return a + b;
// }

// double sum(double a, double b)
// {
//     std::cout << __PRETTY_FUNCTION__ << std::endl;
//     return a + b;
// }

template<typename T> // T, X, Y, Z
T sum(T a, T b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return a + b;
}

template<typename X, typename Y> 
X sum(X a, Y b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return a + b;
}

class Point
{
public:
    int x;
    int y;

    Point operator+(const Point& other) const
    {
        Point out;

        out.x = this->x + other.x;
        out.y = this->y + other.y;

        return out;
    }
};


int main()
{
    foo(42.);
    foo(42);

    std::cout << sum<int>(2, 4) << std::endl;
    std::cout << sum<float>(2.f, 4.f) << std::endl;
    std::cout << sum<int, float>(2, 4.f) << std::endl;

    Point a, b;
    sum<Point>(a, b);

    return 0;
}