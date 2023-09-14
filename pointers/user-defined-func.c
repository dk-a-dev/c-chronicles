#include <stdio.h>

void increment(int *pnum) // called function or gnum is  formal argument
{
    // gnum+=1; call by value
    *pnum += 1; // call by reference
}

int main(int argc, char const *argv[]) // calling function
{
    int num;
    scanf("%d", &num);
    increment(&num); // actual argument
    printf("num=%d", num);
    return 0;
}
