
#include <stdio.h>
int *larger(int *x, int *y)
{
    if (*x > *y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main(int argc, char const *argv[])
{
    int a = 30, b = 20;
    int *p;
    p = larger(&a, &b);
    printf("larger = % d", *p);

    return 0;
}
