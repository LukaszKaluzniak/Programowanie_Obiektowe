#include <stdio.h>

struct trojkat
{
    float a, b, c;
};

void rewrite(struct trojkat troj1, struct trojkat *troj2)
{
    *troj2 = troj1;
}

int main()
{
    struct trojkat troj1 = {3.0, 4.0, 5.0}, *troj2;
    rewrite(troj1, &troj2);
    return 0;
}
