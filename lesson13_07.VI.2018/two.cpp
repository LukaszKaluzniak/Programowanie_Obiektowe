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

class Points
{
	Point **arr;
	int x;

public:
	friend ostream& operator << (ostream&, Points const&);
	
	Points(int s)
	{
		arr = new Point*[s];
		for (int i = 0; i < s; i++)
		{
			arr[i] = new Point;
			arr[i]->a = i;
			arr[i]->b = i;
			cout << arr[i]->a << " " << arr[i]->b << endl;
		}
	}
};

ostream& operator << (ostream& output, Points const& p)
{
	for (int i = 0; i < p.a; i++)
	{
		output << p.arr[i]->a << endl;
    output << p.arr[i]->b << endl;
	}
		return output;
}


int main()
{
  Point p;
	p.a = 4;
	p.y = 3;
  
	cout << p.x << endl;
  cout << p.y << endl;
  
	Points ps(2);
  cout << ps;
  
  return 0;
}
