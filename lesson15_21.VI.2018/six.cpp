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

class KlasaUsuwajaca
{
public:
    void operator()(Klasa *wsk)
    {
        cout << "Czyszczenie obiektu o id " << wsk->getId() << endl;
        delete wsk;
    }
};

int Klasa::nextId = 0;

int main(int argc, char *argv[])
{
    shared_ptr<Klasa, KlasaUsuwajaca> ptr(new Klasa);
    cout << ptr->test(5) << endl;
    cout << "KONIEC" << endl;
    return 0;
}
