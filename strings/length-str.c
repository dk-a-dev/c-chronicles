#include <stdio.h>

void input(char *str)
{
    printf("Input the String: ");
    gets(str);
}
void length(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i = i + 1;
    }
    printf("Length of the string is:%d", i);
}
int main(int argc, char const *argv[])
{
    char *str[50];
    input(*str);
    length(*str);
    return 0;
}
