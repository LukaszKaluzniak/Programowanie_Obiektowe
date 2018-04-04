#include <iostream>
#include <cstdlib>
#include "settlers.h"

Villager::Villager()
{
    age = 0;
    age_max = rand()%101;
    gender = rand()%2;
    if(gender == 0)
    {
        is_male = false;
        name = f_names[rand()%2];
    }
    else
    {
        is_male = true;
        name = m_names[rand()%5];
    }
    cout << "Masz panie nowego poddanego!" << endl;
    //cout << name << ", " << age_max << ", " << (is_male == true ? "facet" : "kobieta") << endl;
}

Villager::Villager(string n, unsigned short int a, unsigned short int a_m, bool i_m)
{
    name = n;
    age = a;
    age_max = a_m;
    is_male = i_m;
    cout << "Masz panie nowego poddanego!" << endl;
    //cout << name << ", " << age << ", " << age_max << ", " << (is_male == true ? "facet" : "kobieta") << endl;
}

void Villager::aging()
{
    age++;
    if(age == age_max)
        delete this;
}

Villager::~Villager()
{
    cout << "Nasza postac zginela!" << endl << name << ", " << (is_male == true ? "facet" : "kobieta") << ", " << "w wieku " << age << " lat." << endl;
}
