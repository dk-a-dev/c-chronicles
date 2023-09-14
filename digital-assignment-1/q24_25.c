#include <stdio.h>
int num1, num2;
void input()
{
    printf("Enter Numbers for there GCD,LCM:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
}

int gcd()
{
    int temp_num1 = num1;
    int temp_num2 = num2;
    while (temp_num1 != temp_num2)
    {
        if (temp_num1 > temp_num2)
        {
            temp_num1 -= temp_num2;
        }
        else
        {
            temp_num2 -= temp_num1;
        }
    }
    return temp_num1;
}

int main(int argc, char const *argv[])
{
    input();
    int temp_gcd=gcd();
    printf("GCD of %d,%d=>%d\n", num1, num2, temp_gcd);
    printf("LCM of %d,%d=>%d", num1, num2, (num1*num2)/temp_gcd);
    return 0;
}
