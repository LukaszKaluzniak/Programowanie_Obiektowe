#include <iostream>

using namespace std;

class Polygon
{
public:
    struct Point
    {
        double x, y;
    };
private:
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

    void add(Point point) //trzeba zrobić jeszcze dodawanie do tablicy tej zmiennej typu Point
    { // na wejściówce powinna być głównie dynamiczna alokacja pamięci, czy coś takiego
        Point **pointsCpy = points;
        size += 4;
        points = new Point*[size];
        for(int i = 0; i < count; i++)
            points[i] = pointsCpy[i];
        delete pointsCpy;
    }
};
//zrób metdę przyjmującą jako argument indeks tablicy punktów, zwracającą referencję na punkt we wskazanej komórce
//patrz komentarz przy void add(Point point)
int main()
{
    Polygon *polygon = new Polygon();
    cout << polygon->getSize() << endl;
    Polygon::Point p;
    p.x = 4;
    p.y = 8;
    polygon->add(p);
    cout << polygon->getSize() << endl;

    return 0;
}
