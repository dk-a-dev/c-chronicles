// C program count total number of duplicate elements in an array
// C program to delete all duplicate elements from an array

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
    
    // count dupliactes
    int *freq = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
            freq[i] = count;
    }

    // delete duplicates
    int *new_arr = (int *)malloc(n * sizeof(int));
    int new_arr_size = 0;
    for (i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            new_arr[new_arr_size] = arr[i];
            new_arr_size++;
        }
    }

    printf("The new array is: ");
    for (i = 0; i < new_arr_size; i++)
        printf("%d ", new_arr[i]);
    
    return 0;
}
