#ifndef SETTLERS_H_INCLUDED
#define SETTLERS_H_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;

class Villager
{
    string name;
    unsigned short int age, age_max;
    unsigned short int gender;
    bool is_male;
    string m_names[5] = {"Mieszko", "Dobromir", "Zbyszko", "Mirko", "Jurand"},
           f_names[2] = {"Dobrawa", "Danuta"};

public:
    Villager();
    Villager(string n, unsigned short int a, unsigned short int a_m, bool i_m);
    void aging();
    ~Villager();
};

class Household
{
    Villager **inhabitants;
    unsigned int inh_max, inh_current;

public:
    Household(unsigned int inh_m, unsigned int init_size);
    void next_year();
};

#endif // SETTLERS_H_INCLUDED
