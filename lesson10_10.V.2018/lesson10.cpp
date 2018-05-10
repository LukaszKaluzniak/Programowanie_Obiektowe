#include <iostream>
//operator overloading na cppreference.com

using namespace std;

class CLiczba
{
    int liczba;
public:
    CLiczba(int liczba)
    {
        this->liczba = liczba;
    }
    void setLiczba(int liczba)
    {
        this->liczba = liczba;
    }
    int getLiczba()
    {
        return liczba;
    }
    int operator+ (CLiczba &other)
    {
        return liczba + other.liczba
    }
    int operator- (CLiczba &other)
    {
        return liczba - other.liczba;
    }

    int operator+ (const int &other)
    {
        return liczba + other;
    }
};

int main(int argc, char *argv[])
{
    CLiczba l1(5);
    CLiczba l2(2);
    cout << "Suma " << l1 + 11 << endl;
    return 0;
}
