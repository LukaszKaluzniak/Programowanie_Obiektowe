#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
    string s, lf;
    stringstream sstream;
    ifstream f;
    unsigned int c = 0;
    size_t p = 0;

    f.open("file.txt");
    sstream << f.rdbuf();
    s = sstream.str();
    f.close();
    cin >> lf;

    while(true)
    {
        p = s.find(lf, p);
        if(p == string::npos)
            break;
        c++;
        p += lf.length();
    }
    cout << c << endl;

    return 0;
}
