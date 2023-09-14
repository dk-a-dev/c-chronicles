#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num, temp_num, rem, checker;
    checker = 0;
    printf("Enter a Number To check its armstrong or not:", NULL);
    scanf("%d", &num);
    temp_num = num;

    while (temp_num != 0)
    {
        rem = temp_num % 10;
        checker = checker + pow(rem, 3);
        temp_num = temp_num / 10;
    }
    num == checker
        ? printf("Yes, %d is an ARMSTRONG NUMBER", num)
        : printf("No, %d is not an ARMSTRONG NUMBER", num);
    return 0;
}
