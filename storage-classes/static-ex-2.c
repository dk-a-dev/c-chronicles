#include <stdio.h>

static int count = 5; /* global variable */

void func(void)
{
    static int i = 5; /* local static variable */
    i++;
    printf("i is %d and count is %d\n", i, count);
}

int main(int argc, char const *argv[])
{
    while (count--)
    {
        func();
    }
    return 0;
    return 0;
}