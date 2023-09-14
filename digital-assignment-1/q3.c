#include <stdio.h>

int main(int argc, char const *argv[])
{
    int upper_limit = 122;
    int lower_limit = 97;
    while (lower_limit <= upper_limit)
    {
        printf("%c ", (char)lower_limit);
        lower_limit++;
    }
    return 0;
}
