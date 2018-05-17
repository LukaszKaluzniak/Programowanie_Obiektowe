#include <iostream>

using namespace std;

template<typename T1, typename T2, int wsp> class Klasa
{
private:
    T1 l1;
    T2 l2;
public:
    Klasa(T1 l1, T2 l2)
    {
        this->l1 = l1;
        this->l2 = l2;
    }
    
    template<typename T3> T3 verify()
    {
        if(l1 > T1(l2))
            return l1;
        else
            return l2;
    }
    
    int licz()
    {
        return int(l1) * wsp;
    }
};

int main()
{
    Klasa<int,double, 200> klasa(4,4,5);
    cout<<klasa.verify<int>()<<endl;
    cout<klasa.verify<double>()<<endl;
    cout<<klasa.licz()<<endl;
}
