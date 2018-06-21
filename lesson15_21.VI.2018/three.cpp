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
    unique_ptr<Klasa> ptr1(new Klasa);
    cout<<ptr1->test(3)<<endl;
    cout<<(*ptr1).test(8)<<endl;
    ptr1.reset(new Klasa);
    cout << "KONIEC" << endl;
    return 0;
}
