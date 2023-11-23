#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, arr[10], temp;
    printf("Enter number of elements of array:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Printing
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}
