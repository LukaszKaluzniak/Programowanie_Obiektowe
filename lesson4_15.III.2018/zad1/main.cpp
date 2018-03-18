#include <iostream>
#include "school.h"

using namespace std;

int main()
{
    User u("able", "bable");
    u.authorize("able", "bable"); //success
    u.authorize("ableb", "bableb"); //error

    return 0;
}
