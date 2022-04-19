#include <stdio.h>
#include <stdlib.h>
char	*ft_strupcase(char *str);

int main()
{
    char string[10] = "LuCaSsIm42";
    printf("Answer: %s\n", ft_strupcase(string));
    return (0);
}