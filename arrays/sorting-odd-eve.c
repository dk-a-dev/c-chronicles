// C program to sort even and odd elements of array separately

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int even[100], odd[100];
    int i, j, k, n;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    j = 0;
    k = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }

    printf("Even elements: ");
    for (i = 0; i < j; i++)
        printf("%d ", even[i]);
    printf("\n");
    printf("Odd elements: ");
    for (i = 0; i < k; i++)
        printf("%d ", odd[i]);
    return 0;
}
