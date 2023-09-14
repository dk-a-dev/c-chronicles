#include <stdio.h>
int num;
void table_generator(int num)
{
    int ul = 10;
    for (int i = 1; i <= ul; i++)
    {
        int value = num * i;
        printf("%d*%d=%d\n", num, i, value);
    }
}

int main(int argc, char const *argv[])
{
    printf("Enter the Number: ",NULL);
    scanf("%d",&num);
    table_generator(num);
    return 0;
}
