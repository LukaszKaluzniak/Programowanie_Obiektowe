#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream f;
    f.open("file.txt");
    f << "test zapisu";
    f.close();

    ifstream f2;
    string line;
    f2.open("file.txt");
    while(getline(f2, line))
        cout << line << endl;
    f2.close();

    return 0;
}
