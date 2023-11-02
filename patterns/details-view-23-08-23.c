#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char name[20];
    gets(name);

    char reg_no[9];
    scanf("%[^\n]s", reg_no);

    char sch[10];
    scanf("%[^\n]%*s", sch);

    int age;
    scanf("%d", &age);

    return 0;
}
