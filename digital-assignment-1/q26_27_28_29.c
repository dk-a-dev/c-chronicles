#include <stdio.h>
int num, sum = 0, flag = 0, pflag = 0;
void input()
{
    printf("Enter Numbers for PRIME CHECK: ");
    scanf("%d", &num);
}
void prime()
{
    int temp_num = num / 2;
    for (int i = temp_num; i > 1; i--)
    {
        if (num % i == 0)
        {
            printf("%d is NOT PRIME\n", num);
            return;
        }
    }
    printf("%d is PRIME\n", num);
    pflag=1;
    if (flag == 1)
    {
        sum += num;
    }
}
void one2nprime_sumofprime()
{
    int nth;
    flag = 1;
    printf("Enter nth number: ");
    scanf("%d", &nth);
    for (int k = 1; k <= nth; k++)
    {
        num = k;
        prime();
    }
    printf("Sum of all PRIME NUMBERS=>%d", sum);
}

void prime_factor()
{
    int pnum;
    printf("\nEnter number its prime_factor: ");
    scanf("%d", &pnum);
    int temp_prm = pnum / 2;
    for(int i=2;i<=temp_prm;i++){
        num=i;
        pflag=0;
        prime();
        if(pflag==1 && pnum%i==0){
            printf("%d is a Prime Factor\n",i);
        }
    }
}

int main(int argc, char const *argv[])
{
    input();
    prime();
    one2nprime_sumofprime();
    prime_factor();
    return 0;
}
