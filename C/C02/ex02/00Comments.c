/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassim <lucassim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:04:15 by lucassim          #+#    #+#             */
/*   Updated: 2022/04/18 22:19:23 by lucassim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Neste exercício devemos escrever uma função que retorne 1 se a string passada como parâmetro
só contiver caracteres alfabéticos e retorne 0 se a função contiver outros tipos de
caracteres.

Ela deve ser prototipada da seguinte maneira:

int	ft_str_is_alpha(char *str);
*/

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
