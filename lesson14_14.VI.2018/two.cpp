#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> a;
    for(int i = 0; i<5; i++)
        a.push_back(i+1);
    int min=2, max=5;

    replace_if(a.begin(), a.end(), [min, max](int value) { return !{value>min&&value<max);},0);

        for(int i:a)
            cout << i << " ";
    return 0;
}
