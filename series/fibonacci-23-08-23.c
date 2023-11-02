#include <stdio.h>

int main(int argc, char const *argv[])
{
    int pntr_1, pntr_2, temp, ele;

    printf("Specify a number upto which series should occur:", NULL);
    scanf("%d", &ele);

    pntr_1 = 0;
    pntr_2 = 1;
    temp = 1;
    printf("%d\t%d\t", pntr_1, pntr_2);

    while (temp < ele)
    {
        temp = pntr_1 + pntr_2;
        if (temp > ele)
            break;
        printf("%d\t", temp);
        pntr_1 = pntr_2;
        pntr_2 = temp;
    }
    return 0;
}
