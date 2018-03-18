#ifndef SCHOOL_H_INCLUDED
#define SCHOOL_H_INCLUDED
#include <iostream>

using namespace std;

class User
{
    string login, password;

public:
    User(string l, string p);
    void authorize(string log, string pass);
};

#endif // SCHOOL_H_INCLUDED
