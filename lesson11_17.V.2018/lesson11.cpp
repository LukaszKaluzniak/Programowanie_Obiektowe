#include <iostream>

using namespace std;

template <class Typ>
Typ pomnoz(Typ l1, Typ l2)
{
    return l1*l2;
}

int main()
{
    double a = 5;
    double b = 6;
    cout << pomnoz(a, b) << endl;
}
