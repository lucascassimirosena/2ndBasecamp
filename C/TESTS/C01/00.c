#include<stdio.h>

void	ft_ft(int *nbr); // Não use caso o seu main esteja no mesmo arquivo

int	main(void)
{
	int	nbr;

	ft_ft(&nbr);
	printf("%d", nbr);
	return (0);
}
