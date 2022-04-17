#include <stdio.h>

int main()
{
    int mod[100];
    int div[100];

    int a = 10;
    int b = 5;

    ft_div_mod(a, b, div, mod);
    printf("%d %d", *div, *mod);
}