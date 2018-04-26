#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//[5, 6, 8] -- push_back(5) -> [5, 6, 8, 5]

int main(int argc, char *argv[])
{
    /*
    vector <int> dane;
    dane.push_back(5); //dodanie nowego elementu na końcu wektora
    dane.push_back(6);
    cout << dane[0] << " " << dane[1] << endl;
    cout << dane.size() << endl;
    dane.pop_back();
    cout << dane[0] << endl;
    cout << dane.size() << endl;
    */
    
    /*
    vector <int> daneV;
    list <int> daneL;
    daneV.push_back();
    daneL.push_front();
    */
    
    /*
    set <string> dana;
    dana.insert("TestA");
    dana.insert("TestB");
    set<string>::iterator result; //iterator, który zwróci result
    result = dana.find("TestA");
    if(result == dana.end())
        cout << "nie istnieje" << endl;
    else
        cout << "Istnieje" << endl;
    */
    
    /*
    map <string, string> dane; //<klucz -> (może być int, float, cokolwiek), dana>
    dane["k1"] = "test";
    dane["k2"] = "xyz";
    dane["k3"] = "asd";
    cout << dane["k2"] << endl;
    map <string, string> :: iterator it;
    it = dane.find("k2");
    if(it == dane.end())
        cout << "nie znalazlem" << endl;
    else
        cout << "Znalazlem" << endl;
    */
    
    /*
    vector <int> v;
    v.push_back(5);
    v.push_back(7);
    v_push_back(1);
    v.push_back(3);
    sort(v.begin(), v.end()); //sort(v.begin(), v.begin()+3); 
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
     */
    
    /*
    int a, b;
    a = 10;
    b = 11;
    swap(a, b);
    cout << a << " " << b << endl;
    */
    
    return 0;
}
