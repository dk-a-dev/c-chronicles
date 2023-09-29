#include <stdio.h>

int area(int *length, int *breadth)
{
    return (*length) * (*breadth);
}

int perimeter(int *length, int *breadth)
{
    return 2 * ((*length) + (*breadth));
}

int main(int argc, char const *argv[])
{
    int length, breadth;
    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);
    printf("Area = %d\n", area(&length, &breadth));
    printf("Perimeter = %d\n", perimeter(&length, &breadth));
    return 0;
}
