#include <stdio.h>
int ()
{
    int mod[100];
    int div[100];

    mod[0] = 5;
    div[0] = 10;

    ft_ultimate_div_mod(div, mod);
    printf("%d %d", *div, *mod);
}