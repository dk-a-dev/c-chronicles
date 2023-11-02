// C program to count frequency of each element in an array

#include <stdio.h>
#include <stdlib.h>

void input(int *arr, int n)
{
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}
void freqCounter(int *arr, int *freq, int n)
{
    //  Initialize frequency of each element to 1
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            // If duplicate element is found, increment its frequency
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        // If frequency of element is not counted, count it
        if (freq[i] != 0)
            freq[i] = count;
    }
}

void displayFreq(int *arr, int *freq, int n)
{
    printf("Frequency of all elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        if (freq[i] != 0)
            printf("%d occurs %d times\n", arr[i], freq[i]);
    }
}

int main(int argc, char const *argv[])
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));
    input(arr, size);

    int *freq = (int *)malloc(size * sizeof(int));
    freqCounter(arr, freq, size);
    displayFreq(arr, freq, size);

    return 0;
}