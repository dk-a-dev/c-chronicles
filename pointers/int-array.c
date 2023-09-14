#include <stdio.h>

void sum_of_ele(int* arr,int size) // int arr[] is same as int *arr
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr+i); // arr[i]==*(arr+1)
    }
    printf("Sum of elements=%d\n", sum);
}

void square(int *parr,int size){
    for (int i = 0; i < size; i++)
    {
        *(parr+i)*=*(parr+i);
    }   
}

void display(int *parr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(parr + i));
        // or printf("%d\t",parr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        //  or scanf("%d",arr+i);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr);
    sum_of_ele(arr,size);
    square(arr,size);
    display(arr);
    return 0;
}
