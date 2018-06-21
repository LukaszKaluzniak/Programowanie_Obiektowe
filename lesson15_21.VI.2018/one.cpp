#include <iostream>

using namespace std;

class Klasa
{
private:
    static int nextId;
    int Id;
public:
    Klasa() : Id(++nextId)
    {
        cout << "Nowy obiekt o id " << Id << endl;
    }
    ~Klasa()
    {
        cout << "Destruktor obiektu o id " << Id << endl;
    }

    int test(int arg)
    {
        cout << "Funkcja testowa obiektu o id " << Id << endl;
        return arg + 4;
    }
    int getId()
    {
        return Id;
    }
};

int Klasa::nextId = 0;

int main(int argc, char *argv[])
{
    Klasa *t1 = new Klasa();
    cout << t1->test(2) << endl;
    delete t1;
    return 0;
}
