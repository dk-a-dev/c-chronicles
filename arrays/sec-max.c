// second largest number in an array

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5], i, max, max2;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    max2 = 0;
    for (i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max)
        {
            max2 = arr[i];
        }
    }
    printf("Second largest number is %d", max2);
    return 0;
}