#include <stdio.h>
#include <stdlib.h>
void print()
{
    printf("Hello World\n");
}

int* add(int *a, int *b)
{
    // this is dynamic memory allocation
    // stored on heap
    // retains value even after function call
    // can be freed using free()
    int* c=(int*)malloc(sizeof(int));
    *c = *a + *b;
    return c;
}
// Bottom to top passing data works but top to bottom does not work
// main to add to print works but print to add to main does not work
int main(int argc, char const *argv[])
{
    int a = 10, b = 20;
    int *c = add(&a, &b);
    print();
    printf("%d\n", *c);
    return 0;
}
