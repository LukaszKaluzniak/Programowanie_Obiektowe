#include <iostream>

using namespace std;

float x;

class RegularPolyhedron
{
    float base_side_length, base_field, height;
    unsigned int number_of_sides;

public:
    RegularPolyhedron(float sd, float nos, float h)
    {
        //metoda_licząca pole wielokąta foremnego
    }

protected:
    float get_base_field()
    {
        return base_field;
    }

    float get_height()
    {
        return height;
    }

public:
    virtual float volume()
    {
        return x;
    }
};



int main()
{

    return 0;
}
