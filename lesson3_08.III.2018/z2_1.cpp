#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(),::tolower);

    char earliest = 'z', latest = 'a';
    for(unsigned int i = 0; i < str.length(); i++)
    {

        if(earliest > str[i])
            earliest = str[i];
        if(latest < str[i])
            latest = str[i];
    }

    cout << "Earliest: " << earliest << endl;
    cout << "Latest: " << latest << endl;
    return 0;
}
