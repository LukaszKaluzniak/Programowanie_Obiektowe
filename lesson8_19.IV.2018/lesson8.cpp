#include <iostream>

using namespace std;

class Testowa
{
private:
    static int zmiennaStatyczna;
public:
    static int metodaStatyczna()
    {
        cout << zmiennaStatyczna << endl;
        cout << "Metoda statyczna" << endl;
        return 3;
    }

    void metoda()
    {
        zmiennaStatyczna++;
        cout << zmiennaStatyczna << endl;
    }
};
// ZADANIE 4 Z TEMATU 6 DO ZROBIENIA!
int Testowa::zmiennaStatyczna = 0;

int main()
{
    //Testowa test;
    //test.metoda();
    //cout << Testowa::metoda() << endl;

    Testowa t1;
    Testowa t2;
    t1.metoda();
    t2.metoda();
    t1.metoda();
    t2.metoda();
    //Testowa::metoda();
    return 0;
}
