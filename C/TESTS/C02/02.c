#include <stdio.h>
#include <stdlib.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char *str;

	str = malloc(sizeof(char));
	str = "asjkldfjaslfj";
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}