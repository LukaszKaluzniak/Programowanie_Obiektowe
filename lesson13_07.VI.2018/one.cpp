#include <iostream>

using namespace std;

struct Point
{
    float a, b;
    friend istream& operator >> (istream&, Point&);
};

istream &operator >> (istream& input, Point& p){
    input >> p.a >> p.b;
    return input;
}

int main()
{
    Point p;
    cin >> p;
    cout << p.a << " " << p.b << endl;
    return 0;
}
