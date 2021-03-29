#include <stdio.h>
int main()
{
    int a = 1;
    int b = 10;
    int c = 10;
DONUT:
    a = a * 10;
    b = a * c + 5;
    if (b > 100)
        goto HONEY;
    else
        goto SODA;
CANDY:
    a = 1;
    c = c - 5;
    goto DONUT;
SODA:
    printf("B: %d", b);
    return 0;
HONEY:
    b--;
    goto CANDY;
}