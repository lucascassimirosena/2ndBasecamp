#include <stdio.h>
#include <stdlib.h>

int    main(void)
{
    char    empty[] = "";
    char    uppercase[] = "ABC";
    char    lowercase[] = "xyz";
    char    other[] = "Salut!";

    printf("ft_str_is_alpha - Chech for alphabet only strings\n");

    printf("%s : %d\n", empty, ft_str_is_alpha(empty));
    printf("%s : %d\n", uppercase, ft_str_is_alpha(uppercase));
    printf("%s : %d\n", lowercase, ft_str_is_alpha(lowercase));
    printf("%s : %d\n", other, ft_str_is_alpha(other));
}