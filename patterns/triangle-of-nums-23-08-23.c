#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, flag, fval, count;
    scanf("%d", &fval);
    i = j = flag = count = 1;
    while (flag)
    {
        while (j <= i)
        {
            printf("%d ", count);
            if (count == fval)
            {
                flag=0;
                break;
            }
            count = count + 1;
            j++;
        }
        printf("\n");
        j = 1;
        i++;
    }
    return 0;
}
