#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,arr[10],max,min;
    printf("Enter number of elements of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]>max){
            max=arr[j];
        }
        if(arr[j]<min){
            min=arr[j];
        }
    }
    printf("MAX=%d\n",max);
    printf("MIN=%d",min);
    return 0;
}
