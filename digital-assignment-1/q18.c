#include <stdio.h>
int freq_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int main(int argc, char const *argv[])
{
    int num, temp;
    scanf("%d", &num);
    while (1)
    {
        temp = num % 10;
        freq_arr[temp]++;
        num = num / 10;
        if (num == 0)
            break;
    }
    for(int i=0;i<10;i++){
        printf("%d frequency is: %d\n",i,freq_arr[i]);
    }
    return 0;
}
