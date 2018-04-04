#include <iostream>
#include "settlers.h"

using namespace std;

int main()
{
    Villager *v1 = new Villager();
    cout << endl;

    Villager *v2 = new Villager("Pietrek", 93, 94, true);
    cout << endl;

    v2->aging();
    cout << endl;

    Household *household = new Household(100, 10);
    household->next_year();

    return 0;
}
