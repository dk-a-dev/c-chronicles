// Palindrome checker with pointer to function

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char *str)
{
    int len = strlen(str);
    char *ptr1 = str;
    char *ptr2 = str + len - 1;
    while (ptr1 < ptr2)
    {
        if (*ptr1 != *ptr2)
        {
            return 0;
        }
        ptr1++;
        ptr2--;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
        
    return 0;
}
