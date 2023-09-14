#include <stdio.h>

int num;

int num_counter(int num){
    int count=0;
    while(num/10>0){
        ++count;
        num=num/10;
    }
    return ++count;
}

int main(int argc, char const *argv[])
{
    printf("Enter the Number:");
    scanf("%d", &num);
    printf("Num of digits in this num:%d",num_counter(num));
    return 0;
}
