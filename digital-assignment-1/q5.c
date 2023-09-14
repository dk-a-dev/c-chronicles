#include <stdio.h>

int main(int argc, char const *argv[])
{
    int upper_limit = 100;
    int lower_limit = 1;
    while (lower_limit <= upper_limit)
    {
        if (lower_limit % 2 != 0)
        {
            printf("%d ", lower_limit);
        }
        lower_limit++;
    }
    return 0;
}
