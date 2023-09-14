#include <stdio.h>

int num, expo, ans = 1;

void input()
{
    printf("Enter Number:");
    scanf("%d", &num);
    printf("Enter power:");
    scanf("%d", &expo);
}

void power()
{
    for (int i = 0; i < expo; i++)
    {
        ans *= num;
    }
    printf("%d^(%d)=%d", num, expo, ans);
}

int main(int argc, char const *argv[])
{
    input();
    power();
    return 0;
}
