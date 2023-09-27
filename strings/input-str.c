#include <stdio.h>

void input()
{
    char str[50];
    printf("Enter a String:");
    gets(str);
    printf("The string you entered is : ");
    puts(str);
}

int main(int argc, char const *argv[])
{
    input();
    return 0;
}
