#include <stdio.h>
static char c;
static int i;
static float f;
static char s[100];
int main()
{
    printf("%d %d %f %s", c, i, f);

    // the initial default value of c, i, and f will be printed which is 0 0 0.000000 (null)
}
