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

    void move(float a, float b)
    {
        this->x += a;
        this->y += b;
    }
};

int main()
{
    Point p = Point();

    p.setX(5.5);
    p.setY(10.0);

    p.move(5, 10.0);

    cout << p.getX() << ", " << p.getY() << endl;

    return 0;
}
