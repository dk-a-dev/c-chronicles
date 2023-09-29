#include <stdio.h>
int main()
{
    register int a; // variable a is allocated memory in the CPU register. The initial default value of a is garbage value.
    printf("%d", a);
    printf("%u",&a);
}  
