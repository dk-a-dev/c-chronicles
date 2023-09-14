#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int marks;
    char grade;
    scanf("%d", &marks);
    if (marks < 0 || marks > 100)
    {
        printf("Wrong Input EXITING...");
        exit(0);
    }
    else if (marks > 90 && marks <= 100)
    {
        grade = 'S';
    }
    else if (marks > 80 && marks <= 90)
    {
        grade = 'A';
    }
    else if (marks > 70 && marks <= 80)
    {
        grade = 'B';
    }
    else
    {
        grade = 'F';
    }
    printf("You Got *%c* Grade", grade);
    return 0;
}
