#include <stdio.h>
#include <ctype.h>

void input(char *str)
{
    printf("Enter a String: ", NULL);
    fgets(str, 100, stdin);
    printf("%s\n", str);
}

void identifier(char *str)
{
    int alpha_count = 0, digit_count = 0, spec_count = 0, i = 0;
    while (str[i] != '\0')
    {
        char ch = str[i];
        if (isalpha(ch))
            alpha_count++;
        else if (isdigit(ch))
            digit_count++;
        else
            spec_count++;
        i++;
    }
    printf("Number of alphabets: %d\n", alpha_count);
    printf("Number of digits: %d\n", digit_count);
    printf("Number of special characters: %d\n", spec_count);
}

int main(int argc, char const *argv[])
{
    char *str[100];
    input((char *)str);
    identifier((char *)str);
    return 0;
}
