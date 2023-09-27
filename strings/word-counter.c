#include <stdio.h>
#include <stdlib.h>

void input(char *str)
{
    printf("Enter a String: ");
    gets(str);
}

void word_counter(char *str)
{
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (*(str + i) == (char)' ')
            count++;
        i++;
    }
    printf("\nnumber of words: %d", count+1);
}

int main(int argc, char const *argv[])
{
    char *str[50];
    input(*str);
    word_counter(*str);
    return 0;
}
