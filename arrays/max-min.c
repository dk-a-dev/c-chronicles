// find smallest and largest number at their positions in array
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5], i, max, min, maxpos = 1, minpos = 1;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    min = arr[0];
    for (i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxpos = i + 1;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            minpos = i + 1;
        }
    }
    printf("Largest number is %d at position %d", max, maxpos);
    printf("\nSmallest number is %d at position %d", min, minpos);
    return 0;
}
