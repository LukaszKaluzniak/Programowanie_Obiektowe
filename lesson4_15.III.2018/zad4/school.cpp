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

Subject::Subject(string sub, unsigned short int s_m)
{
    subj = sub;
    stud_max = s_m;
    stud_index = 0;
}

void Subject::test()
{
    cout << subj << " " << stud_max << endl;
}

bool Subject::addStudent(Student *stud)
{
    if(stud_index < stud_max)
    {
        stud_arr[stud_index++] = stud;
        return true;
    }
    return false;
}

Student Subject::check(int index, bool &logic)
{
        if(index<=stud_index)
        {
            logic = true;
            return *(stud_arr[index - 1]);
        }
        logic = false;
        Student x;
        return x;
    }
