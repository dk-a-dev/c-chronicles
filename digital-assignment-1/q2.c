#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num_n;
    int i = 1;
    printf("Enter nth number:");
    scanf("%d", &num_n);
    while (num_n >= i)
    {
        printf("%d ", num_n);
        num_n--;
    }

    return 0;
}
