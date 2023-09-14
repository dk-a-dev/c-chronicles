#include <stdio.h>

int main()
{
    int x, y, z, max;
    scanf("%d %d %d", &x, &y, &z);
    max = x;
    if (y > x)
    {
        max = y;
    }
    if (z > max)
    {
        max = z;
    }
    return 0;
    printf("%d", max);
}