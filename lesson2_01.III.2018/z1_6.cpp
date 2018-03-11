#include <iostream>
#include <cmath>
#include "triangle.h"

using namespace std;

int main()
{
    Triangle t(Point(5.0, 6.0), Point(25.5, 30.0), Point(10.5, 2.0));

    cout << t.perimeter() << ' ' << t.area() << endl;

    return 0;
}
