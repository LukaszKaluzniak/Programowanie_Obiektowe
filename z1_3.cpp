#include <iostream>

using namespace std;

class Point
{
private:
    float x, y;

public:
    Point(float x, float y)
    {
        this->x = x;
        this->y = y;
    }

    float getX()
    {
        return x;
    }

    float getY()
    {
        return y;
    }

    void move(Point p)
    {
        x += p.getX();
        y += p.getY();
    }
};

int main()
{
    Point p = Point(5.5, 10.0), v = Point(1.0, 2.0);

    p.move(v);

    cout << p.getX() << ", " << p.getY() << endl;

    return 0;
}
