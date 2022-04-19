/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassim <lucassim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:04:34 by lucassim          #+#    #+#             */
/*   Updated: 2022/04/18 22:49:40 by lucassim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (32 > str[i] || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
