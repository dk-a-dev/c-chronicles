#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum, counter;
    sum = 0;
    printf("Enter nth term:");
    scanf("%d", &counter);
    while (counter >= 0)
    {
        if (counter % 2 != 0)
        {
            sum = sum + counter;
        }
        counter = counter - 1;
    }
    printf("Sum=%d", sum);
    return 0;
}
