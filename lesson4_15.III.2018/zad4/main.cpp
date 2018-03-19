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

    cout << endl;

    bool l= false;

    Student st = sj.check(1, l);
    st.authorize("abale", "babale"); //success
    st.authorize("alfkja", "ahfja"); //error
    cout << l;

    cout << endl << endl;

    Student stu = sj.check(2, l);
    st.authorize("abale", "babale"); //success
    st.authorize("alfkja", "ahfja"); //error
    cout << l;

    cout << endl;

    return 0;
}
