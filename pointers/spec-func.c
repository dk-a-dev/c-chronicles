// malloc => void* malloc(size_t size)
// int *p=(int*)malloc(3*sizeof(int)); 3 integers memory
// all unallocated are garbage
// size_t => usigned integer

// calloc => void* calloc(size_t num_of_ele,size_t size(data-type))
// all unsused are 0 initialized

// realloc => void* realloc(void* ptr,size_t size(data-type))

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int *parr = (int *)calloc(size, sizeof(int));
    // or int *parr = (int *)malloc(size*sizeof(int));
    // or int *parr=(int*)realloc(NULL,size*sizeof(int));
    for (int i = 0; i < size; i++)
    {
        parr[i] = i + 1;
    }
    // free(parr); // or int *parr=(int*)realloc(parr,0);
    // even after freeing the memory still we can read,write to it
    // but it is not a good practice
    int *parr2 = (int *)realloc(parr, (size/2) * sizeof(int));
    int *parr2 = (int *)realloc(parr, (size*2) * sizeof(int));
    for (int k = 0; k <size; k++)
    {
        printf("%d ", parr[k]);
    }
    return 0;
}
