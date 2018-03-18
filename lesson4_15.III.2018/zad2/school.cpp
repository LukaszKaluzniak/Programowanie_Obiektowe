#include <iostream>
#include "school.h"

using namespace std;

User::User(string l, string p)
{
    login = l;
    password = p;
}

void User::authorize(string log, string pass)
{
    if(log == login && pass == password)
        cout << "success" << endl;
    else
        cout << "error" << endl;
}

Student::Student(string lg, string ps, unsigned int s) : User(lg, ps)
{
    semestr = s;
}

void Student::test()
{
    cout << login << " " << password << " " << semestr << endl;
}
