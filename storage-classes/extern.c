// #include <stdio.h>
// int main()
// {
//     extern int a; // no initialization in internal block
//     printf("%d", a);
// }

// #include <stdio.h>
// int a;
// int main()
// {
//     extern int a; // variable a is defined globally, the memory will not be allocated to a
//     printf("%d", a);
// }

extern int a;
int a = 10;
#include <stdio.h>
int main()
{
    printf("%d", a);
}
int a = 20; // compiler will show an error at this line
