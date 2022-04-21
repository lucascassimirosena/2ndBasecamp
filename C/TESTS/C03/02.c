// Este teste foi criado por uma pessoa da minha vila
// Criarei meus próprios posteriormente

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[17]="teste de ";
    char s2[7]="string";

    printf("s1: %s, s2: %s\n", s1, s2);
    printf("função original= %s\n\n", strcat(s1, s2));
    printf("ft_strcat = %s\n", ft_strcat(s1, s2));
}