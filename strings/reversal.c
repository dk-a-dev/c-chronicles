#include <stdio.h>
#include <stdlib.h>

void input(char *str)
{
    printf("Input the String: ", NULL);
    scanf("%s", str);
}

int length(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void reverse(char *str, int size)
{
    char *rev = (char *)malloc(size * sizeof(char));
    int i = 0;
    while (i <= (size))
    {
        rev[i] = str[size - i - 1];
        i++;
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c ", rev[i]);
    }
}

int main(int argc, char const *argv[])
{
    char *str = (char *)malloc(50 * sizeof(char));
    input((char *)str);
    int size = length((char *)str);
    reverse((char *)str, size);
    return 0;
}
