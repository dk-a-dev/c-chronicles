#include <stdio.h>

int num;

void input()
{
    printf("Enter Number:");
    scanf("%d", &num);
}

void word_conv()
{
    int temp,rev_num=0;
    // reversal
    while(num != 0)
    {
        rev_num = (rev_num * 10) + (num % 10);
        num /= 10;
    }

    while(rev_num!=0){
        temp=rev_num%10;
        switch (temp)
        {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;      
        case 4: 
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7: 
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        default:
            break;
        }
        rev_num/=10;
    }
}

int main(int argc, char const *argv[])
{
    input();
    word_conv();
    return 0;
}
