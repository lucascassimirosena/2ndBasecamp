#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char   *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	unsigned int n;
	char *src;
	char *dest;

	n = 8;
	src = malloc(sizeof(char));
	src = "lucassim";
	dest = malloc(sizeof(char));
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
