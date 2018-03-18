#ifndef SCHOOL_H_INCLUDED
#define SCHOOL_H_INCLUDED
#include <iostream>

using namespace std;

class User
{
    public:
    string login, password;

public:
    User(string l, string p);
    void authorize(string log, string pass);
};

class Student : public User
{
    public:
    unsigned int semestr;

public:
    Student(string lg, string ps, unsigned int s);

    void test();
};

#endif // SCHOOL_H_INCLUDED
