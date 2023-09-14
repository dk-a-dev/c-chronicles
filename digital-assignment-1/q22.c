#include <stdio.h>
int num;

void input()
{
    printf("Enter Number:");
    scanf("%d", &num);
}

void factors()
{
    int temp_num = (num / 2);
    for (int i = 1; i < temp_num + 1; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("%d", num);
}

int main(int argc, char const *argv[])
{
    input();
    factors();
    return 0;
}
