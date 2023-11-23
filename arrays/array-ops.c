#include <stdio.h>

int size, arr[10];

void input()
{
    printf("Enter number of elements of array:");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void insertion()
{
    int ele, pos;
    printf("Enter Element to be inserted:");
    scanf("%d", &ele);
    printf("Enter position to be inserted:");
    scanf("%d", &pos);

    for (int i = size; i > pos - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele;
    ++size;
}

void deletion()
{
    int ele, pos;
    printf("Enter Element to be deleted:");
    scanf("%d", &ele);
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == ele)
        {
            pos = i;
            break;
        }
    }
    for (int j = pos; j < size; j++)
    {
        arr[j] = arr[j + 1];
    }
    --size;
}

void display()
{
    printf("Array: ");
    for (int j = 0; j <size; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    input();
    insertion();
    display();
    deletion();
    display();
    return 0;
}
