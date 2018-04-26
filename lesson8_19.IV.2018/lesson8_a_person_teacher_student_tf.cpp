#include <iostream>

using namespace std;

class Person
{
protected:
    string name;

public:
    string ident()
    {
        return name;
    }
};

class Teacher : public Person
{
    string title;

public:
    string ident()
    {
        return name;
    }
};

class Student
{
public:
    int semester;

    string ident()
    {
        //return name;
    }
};

int main()
{

    return 0;
}
