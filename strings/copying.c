#include <stdio.h>

void input(char *str)
{
    printf("Enter a String: ",NULL);
    fgets(str, 100, stdin);
}

void copying(char *strf, char *strs)
{
    int i = 0;
    while (strs[i] != '\0')
    {
        strf[i] = strs[i];
        i++;
    }
    strf[i] = '\0';
    printf("String 2: %s", strs);
    printf("String 1 after copy: %s", strf);
    printf("Numbers of characters copied: %d", i);
}

int main(int argc, char const *argv[])
{
    char strf[100];
    input((char *)strf);
    char strs[100];
    input((char *)strs);
    printf("String 1 before copy: %s", strf);
    copying(strf, strs);
    return 0;
}
