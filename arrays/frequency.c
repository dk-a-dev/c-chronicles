// C program to count frequency of each element in an array

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, j, k, n;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Array to store frequency of each element
    int *freq = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        // Initially initialize frequency of all elements to -1
        freq[i] = -1;

    // Count frequency of each element
    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            // If duplicate element is found
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        // If frequency of current element is not counted
        if (freq[i] != 0)
            freq[i] = count;
    }

    printf("Frequency of all elements of array: \n");
    for (i = 0; i < n; i++)
    {
        if (freq[i] != 0)
            printf("%d occurs %d times\n", arr[i], freq[i]);
    }

    return 0;
}