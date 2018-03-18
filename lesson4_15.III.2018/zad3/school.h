#ifndef SCHOOL_H_INCLUDED
#define SCHOOL_H_INCLUDED
#include <iostream>

using namespace std;

class User
{
protected:
    string login, password;

public:
    User(string l, string p);
    void authorize(string log, string pass);
};

class Student : public User
{
    unsigned int semestr;

public:
    Student(string lg, string ps, unsigned int s);
    void test();
};

class Subject
{
    string subj;
    unsigned short int stud_max, stud_index;
    Student *stud_arr[100];

public:
    Subject(string sub, unsigned short int s_m);
    bool addStudent();
};

#endif // SCHOOL_H_INCLUDED
