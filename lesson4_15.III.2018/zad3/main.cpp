#include <iostream>
#include "school.h"

using namespace std;

int main()
{
    Student s("abale", "babale", 2);
    s.test();
    s.authorize("abale", "babale"); //success
    s.authorize("ababale", "bababale"); //error

    cout << endl;

    Subject sj("math", 25);
    sj.addStudent(&s);
    sj.test();

    return 0;
}
