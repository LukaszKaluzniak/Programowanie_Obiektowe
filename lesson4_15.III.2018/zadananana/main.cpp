#include <iostream>
#include "school.h"

using namespace std;

int main()
{
    Student s("abale", "babale", 2);
    //s.test();
    //s.authorize("abale", "babale"); //success
    //s.authorize("ababale", "bababale"); //error
    Subject a("matma",32);
    a.addStudent(&s);
    bool l= false;
    Student y = a.check(1,l);
    y.authorize("abale", "babale");
    cout<<l;
    return 0;
}