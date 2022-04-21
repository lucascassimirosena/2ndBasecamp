// Este teste foi criado por uma pessoa da minha vila
// Criarei meus próprios posteriormente

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[17]="teste de ";
    char s2[7]="string";

    printf("s1:%s\ns2: %s\n\n", s1, s2);
    printf("ft_strcat = %s\n", ft_strncat(s1, s2, 3));
    printf("função original= %s\n\n", strncat(s1, s2, 3));
}