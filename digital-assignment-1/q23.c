#include <stdio.h>

int num;
void input()
{
    printf("Enter Number:");
    scanf("%d", &num);
}

void factorial()
{
    long long int ans = 1;
    for (int i = 2; i <= num; i++)
    {
        ans *= i;
    }
    printf("%d!=%lli", num, ans);
}

int main(int argc, char const *argv[])
{
    input();
    factorial();
    return 0;
}
