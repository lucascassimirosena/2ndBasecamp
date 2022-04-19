
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char *src;
	char *dest;

	src = malloc(sizeof(char));
	src = "4242424242424242424";
	dest = malloc(sizeof(char));
	ft_strcpy(dest, src);	
	printf("%s\n", dest);
	return (0);
}