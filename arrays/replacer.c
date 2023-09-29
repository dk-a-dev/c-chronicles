// C program to replace all Even elements by 0 and Odd by 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int* arr=(int*)malloc(size*sizeof(int));
    printf("Enter %d elements: ",size);

    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
            arr[i]=0;
        else
            arr[i]=1;
    }

    printf("The new array is: ");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    return 0;
}
