#include <iostream>

using namespace std;

class Polygon
{
    struct Point
    {
        double x, y;
    };
    Point **points;
    unsigned int count, size;

public:
    int getSize()
    {
        return size;
    }

    int getCount()
    {
        return count;
    }

    Point *getPoint(int index)
    {
        if(index < count)
            return points[index];
        else
            return NULL;
    }

    Polygon()
    {
        points = new Point*[4]();
        size = 4;
        count = 0;
    }

    Polygon(int z)
    {
        if(z%4 == 0)
            points = new Point*[z]();
        else
            do
            {
                z++;
                if(z%4 == 0)
                    points = new Point*[z]();
            }
            while(z%4 != 0);
    }

    Polygon(Polygon &cpy)
    {
        size = cpy.getSize();
        count = cpy.getCount();
        points = new Point*[size];
        Point *pcpy;
        for(int i = 0; i < count; i++)
        {
            points[i] = new Point();
            pcpy = cpy.getPoint(i);
            points[i]->x = pcpy->x;
            points[i]->y = pcpy->y;
        }
    }

    ~Polygon()
    {
        for(int i = 0; i < count; i++)
            delete points[i];
        delete points;
    }
};

int main()
{
    Polygon polygon;
    Polygon polygon2(polygon);

    return 0;
}
