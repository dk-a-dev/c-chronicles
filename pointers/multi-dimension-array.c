#include <stdio.h>
int func(int (*arr)[3]){} // or arr[][all other dimensionexcept 1D][...][...]
int main(int argc, char const *argv[])
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    int (*parr)[3]=arr;

    // array reference to first ele initially
    printf("%d\t%d\t%d\n",parr,arr,&arr[0]);

    //&arr[0][0] ref at first ele
    printf("%d\t%d\n",*parr,parr[0]);

    // next set first ele ref
    printf("%d\t%d\t%d\t%d\n",*(parr+1),(parr+1),parr[1],&parr[1][0]);

    // next set last ele pointer
    printf("%d\t%d\t%d\n",*(parr+1)+2,arr[1]+2,&parr[1][2]);

    // element access=3
    printf("%d\n",*(*parr+2));
    printf("%d\n",*(parr[1]+2)); // arr[i][j]=*(arr[i]+j)
    printf("%d\n",*(*(parr+1)+2));
    printf("%d\n",*(*parr+1));
    return 0;
}
