#include <iostream>

using namespace std;

class Point
{
    float x, y;

public:
    void setX(float x)
    {
        this->x = x;
    }

    void setY(float y)
    {
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
    Point p = Point(), v = Point();

    p.setX(5.5);
    p.setY(10.0);
    //-----
    v.setX(1.0);
    v.setY(2.0);

    p.move(v);

    cout << p.getX() << ", " << p.getY() << endl;

    return 0;
}
