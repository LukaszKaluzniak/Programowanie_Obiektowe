#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n1, n2;
    cin >> n1 >> n2;
    string::iterator itn2 = n2.begin();
    for(string::iterator itn1 = n1.begin(); itn1 != n1.end(); itn1++)
    {
        if(itn2 == n2.end())
        {
             cout << "n1 zawiera n2" << endl;
             return 0;
        }
        else if(*itn1 == *itn2)
            itn2++;
        else
            itn2 = n2.begin();
    }
    cout << "n1 nie zawiera n2" << endl;

    return 0;
}
