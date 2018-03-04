#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

float distance(Point p1, Point p2)
{
    return hypotf(p2.getX() - p1.getX(), p2.getY() - p2.getY());
}

int main()
{
    Point p1 = Point(1.0, 2.0), p2 = Point(5.5, 10.0);

    cout << distance(p1, p2) << endl;

    return 0;
}
