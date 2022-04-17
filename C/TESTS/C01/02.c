#include <stdio.h>

int main()
{
    int c = 10;
    int d = 15;

    int *c2 = &c;
    int *d2 = &d;
    ft_swap(c2, d2);

    printf("%d %d", *c2, *d2);
}