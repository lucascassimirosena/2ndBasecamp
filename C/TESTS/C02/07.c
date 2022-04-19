#include <stdio.h>
#include <stdlib.h>
char	*ft_strupcase(char *str);

int	main(void)
{
	char str[] = "dfasda";
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}