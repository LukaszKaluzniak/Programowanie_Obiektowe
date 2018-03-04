#include "triangle.h"
#include <cmath>

Triangle::Triangle(Point a, Point b, Point c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

float Triangle::distance(Point p1, Point p2)
{
    return hypotf(p2.getX() - p1.getX(), p2.getY() - p1.getY());
}

float Triangle::perimeter()
{
    return distance(a,b) + distance(b,c) + distance(c,a);
}

float Triangle::area()
{
    float p = perimeter() * 0.5;
    return sqrt(p*(p-distance(a,b))*(p-distance(b,c))*(p-distance(c,a)));
}
