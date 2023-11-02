// C Program to Find Union & Intersection of 2 Arrays
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], b[100], m, n, i, j, flag = 0;
    printf("Enter the size of 1st array : ");
    scanf("%d", &m);
    printf("Enter the elements of 1st array : ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of 2nd array : ");
    scanf("%d", &n);
    printf("Enter the elements of 2nd array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("The union of the two arrays is : ");
    for (i = 0; i < m; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < m; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", b[i]);
        }
    }

    printf("\nThe intersection of the two arrays is : ");
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < m; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", b[i]);
        }
    }

    return 0;
}