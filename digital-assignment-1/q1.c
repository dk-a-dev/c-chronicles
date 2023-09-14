#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num_n;
    int i = 1;
    printf("Enter nth number:");
    scanf("%d", &num_n);
    while (i <= num_n)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}
