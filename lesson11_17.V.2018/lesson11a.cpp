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
    
    //T2 sum(); coś takiego?
    
    int licz()
    {
        return int(l1) * wsp;
    }
};

template<typename Typ> Typ test(int l1, double l2)
{
    cout<<"ogolna"<<endl;
    if(double(l1) > l2)
        return l1;
    else
        return l2;
}

template<> bool test<bool>(int l1, double l2)
{
    cout<<"specjalizowana"<<endl;
    return(double(l1) > l2);
}

void dedukcja(int a)
{
    cout << "dedukcja int " <<a<<endl;
}

template<typename T> void dedukcja(T a)
{
    cout << "dedukcja template " << a<<endl;
};

int main()
{
    Klasa<int,double, 200> klasa(4,4,5);
    cout<<klasa.verify<int>()<<endl;
    cout<klasa.verify<double>()<<endl;
    cout<<klasa.licz()<<endl;
    cout<<test<double(4,5,5)<<endl;
    cout<<test<bool>(4,5,5)<<endl;
    dedukcja(1);
    cout<<endl;
    dedukcja<int>(1);
}
