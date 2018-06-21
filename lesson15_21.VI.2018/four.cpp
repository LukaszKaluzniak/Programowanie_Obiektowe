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
    shared_ptr<Klasa> ptr1(new Klasa);
    shared_ptr<Klasa> ptr2(ptr1);
    shared_ptr<Klasa> ptr3(ptr1);
    cout << ptr1->test(3) << endl;
    cout << ptr2->test(8) << endl;
    cout << ptr3->test(2) << endl;
    cout << "KONIEC" << endl;
    return 0;
}
