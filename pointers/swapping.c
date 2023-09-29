#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x; // save the value at address x
    *x = *y;   // put y into x
    *y = temp; // put x into y
}
int main(int argc, char const *argv[])
{
    int a = 30, b = 20;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
