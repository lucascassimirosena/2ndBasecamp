// Este teste foi criado por uma pessoa da minha vila
// Criarei meus próprios posteriormente


#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s1="teste";
    char *s2="teste"; // igual s1
    char *s3="tEste";
    char *s4="t3ste";
    char *s5="te$te";
    char s6[]={-10, 'e', 's', 't', 'e'};
    char *s7="testee";
    char *s8="test";

    printf("s1: %s, s2: %s, s3: %s, s4: %s, s5: %s, s6: %s, s7: %s, s8: %s\n\n", s1, s2, s3, s4, s5, s6, s7, s8);
    printf("comparando s1 com s2\n");
    printf("ft_strcmp = %d\n", ft_strncmp(s1, s2,7));
    printf("função original= %d\n\n", strncmp(s1, s2,7));

    printf("comparando s1 com s3\n");
    printf("ft_strcmp = %d\n", ft_strncmp(s1, s3,7));
    printf("função original= %d\n\n", strncmp(s1, s3,7));

    printf("comparando s1 com s4\n");
    printf("ft_strcmp = %d\n", ft_strncmp(s1, s4,7));
    printf("função original= %d\n\n", strncmp(s1, s4,7));

    printf("comparando s1 com s5\n");
    printf("ft_strcmp = %d\n", ft_strncmp(s1, s5,7));
    printf("função original= %d\n\n", strncmp(s1, s5,7));

    printf("comparando s1 com s6\n");
    printf("ft_strcmp = %d\n", ft_strncmp(s1, s6,7));
    printf("função original= %d\n\n", strncmp(s1, s6,7));

    printf("comparando s1 com s7\n");
    printf("ft_strcmp = %d\n", ft_strncmp(s1, s7,7));
    printf("função original= %d\n\n", strncmp(s1, s7,7));

    printf("comparando s1 com s8\n");
    printf("ft_strcmp = %d\n", ft_strncmp(s1, s8,7));
    printf("função original= %d\n\n", strncmp(s1, s8,7));
}