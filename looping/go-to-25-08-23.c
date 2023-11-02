#include <stdio.h>

int main(int argc, char const *argv[])
{
    double avg, sum, num;
    int avg_flag = 1;
    while (avg_flag)
    {
        printf("Enter Number-%d: ", avg_flag);
        scanf("%lf", &num);
        if (num < 0.0)
        {
            goto exitPath;
        }
        sum = sum + num;
        avg_flag++;
    }
exitPath:
    avg = sum / (avg_flag - 1);
    printf("\nSum=%lf\n", sum);
    printf("Average=%lf", avg);
    return 0;
}
