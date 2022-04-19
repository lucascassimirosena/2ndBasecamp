#include <stdio.h>
#include <stdlib.h>
char	*ft_strlowcase(char *str);

int main()
{
    char string[10] = "LuCasSim42";
    printf("Answer: %s\n", ft_strlowcase(string));
    return (0);
}