/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassim <lucassim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:49:40 by lucassim          #+#    #+#             */
/*   Updated: 2022/04/20 21:47:03 by lucassim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				a;
	int				b;
	int				c;
	int				d;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			a = s1[i];
			b = s2[i];
			return (a - b);
		}
		i++;
	}
	if ((i < n && s2[i] != '\0' && s1[i] == '\0')
		|| (s1[i] != '\0' && s2[i] == '\0'))
	{
		c = s1[i];
		d = s2[i];
		return (c - d);
	}
	return (0);
}