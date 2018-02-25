#include <stdio.h>

struct trojkat
{
    float a, b, c;
};

float circuit(struct trojkat triangle)
{
    return triangle.a+triangle.b+triangle.c;
}

int main()
{
    struct trojkat troj = {3.0, 4.0, 5.0};
    printf("%f", circuit(troj));
    return 0;
}
