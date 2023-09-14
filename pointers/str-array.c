#include <stdio.h>
#include <string.h>

void print(char *pchr){
    printf("\n");
    // pchr[0]='k'; cant use this if const char *pchr is passed as argument
    while(*pchr!='\0'){
        printf("%c",*pchr);
        pchr++;
    }
}

int main(int argc, char const *argv[])
{
    char str[] = "dev"; // sting gets stored in contiguous memory==array
    // char *str="hello"; string gets stored as compile time constant
    int size = sizeof(str);
    printf("Length is %d,Size is %d bytes\n", strlen(str), size);
    char *pc;
    pc = str;
    for (int i = 0; i < size; i++)
        printf("%c", *(pc + i));
    print(str);
    return 0;
}