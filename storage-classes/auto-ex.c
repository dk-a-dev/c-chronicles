#include <stdio.h>
int main()
{
    int a = 20, i;
    printf("%d ", ++a);
    {
        int a = 30;
        for (i = 0; i < 3; i++)
        {
            printf("%d ", a); // 30 will be printed 3 times since it is the local value of a
        }
    }
    printf("%d ", a); // 21 will be printed since the scope of a = 30 is ended.
}
