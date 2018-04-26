#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

class Point
{
public:
    float x, y;

    Point(float a, float b)
    {
        this->x = a;
        this->y = b;
    }
};

bool cmp(Point *p1, Point *p2)
{
    return p1->x > p2->x;
}

vector<Point> sprawdz(const vector<Point>& dane, Point lg, Point pd)
{
    vector<Point> vRes;
    for(int i - 0; i < dane.size(); i++)
        if(dane[i].x  lg.x && dane[i].x <= pd.x)
            if(dane[i].y >= pd.y && dane[i].y <= lg.y)
                vRes.push_back(dane[i]);
    return vRes;
}

int main()
{
/*
    vector <Point*> vect;
    vect.push_back(new Point(1.2, 2.0));
    vect.push_back(new Point(2.3, 2.2));
    vect.push_back(new Point(0.6, 8.2));
    for(int i = 0; i < vect.size(); i++)
        cout << vect[i]->x << " " vect[i]->y << endl;
    cout << "-----" << endl;
    sort(vect.begin(), vect.end(), cmp);
    for(int i = 0; i < vect.size(); i++)
        cout << vect[i]->x << " " vect[i]->y << endl;
*/
    vector<Point> vect;
    vect.push_back(Point(1.1,2.6));
    vect.push_back(Point(4.5,3.3));
    vect.push_back(Point(3.2,6.7));
    vect.push_back(Point(0.5,0.9));
    
    vector<Point> wynik = sprawdz(vect, Point(3.0, 7.0), Point(5.0, 1.0));
    
    for(int i = 0; i < wynik.size(); i++)
        cout<<wynik[i].x<<" " wynik[i].y<<endl;
    
    return 0;
}
