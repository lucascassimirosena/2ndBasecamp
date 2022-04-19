#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char *str;

	str = malloc(sizeof(char));
	str = "gasdfsadf~";
	printf("%d\n", ft_str_is_printable(str));
	return (0);
}