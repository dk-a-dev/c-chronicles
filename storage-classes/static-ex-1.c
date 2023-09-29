#include <stdio.h>

void sum()
{
    static int a = 15; // initialized only once
    static int b = 20; // initialized only once
    printf("Sum is %d\n", a + b);
    a++;
    b++;
}

int main(int argc, char const *argv[])
{
    int i;
    for (i = 0; i < 5; i++)
        //  The static variables holds their value between multiple function calls. 
        sum();
    return 0;
}
