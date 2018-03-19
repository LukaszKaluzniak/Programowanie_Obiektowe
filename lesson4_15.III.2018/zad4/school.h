#ifndef SCHOOL_H_INCLUDED
#define SCHOOL_H_INCLUDED
#include <iostream>

using namespace std;

class User
{
protected:
    string login, password;

public:
    User() {}
    User(string l, string p);
    void authorize(string log, string pass);
};

class Student : public User
{
    unsigned int semestr;

public:
    Student():User(){}
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
    bool addStudent(Student *stud);
    void test();
    Student check(int index, bool &logic);
};

#endif // SCHOOL_H_INCLUDED
