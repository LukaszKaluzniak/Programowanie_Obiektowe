#include <iostream>

using namespace std;

namespace pt
{
    class Point
    {
    protected:
        float x, y;

    public:
        float get_x()
        {
            return this->x;
        }

        float get_y()
        {
            return this->y;
        }

        Point()
        {
            this->x = 0;
            this->y = 0;
        }

        Point(float a, float b)
        {
            this->x = a;
            this->y = b;
        }
    };
}

class Point3D : public pt::Point
{
    float z;

public:
    Point3D(float a, float b, float c)
    {
        this->x = a;
        this->y = b;
        this->z = c;
    }

    float get_z()
    {
        return this->z;
    }
};

int main()
{
    pt::Point p(2, 3);
    cout << p.get_x() << ", " << p.get_y() << endl;

    Point3D p_3d(2,3,5);
    cout << p_3d.get_z() << endl;

    return 0;
}
