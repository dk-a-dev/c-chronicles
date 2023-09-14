#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 255; i++)
    {
        printf("(%d,%c)\t", i, i);
    }
    return 0;
}
