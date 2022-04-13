/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassim <lucassim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:02:48 by lucassim          #+#    #+#             */
/*   Updated: 2022/04/09 15:45:20 by lucassim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Criado por lucassim

#include <unistd.h>

void    ft_putnum(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    if (!(a == '7' && b == '8' && c == '9'))
    {
        write(1, ", ", 2);
    }
}

void ft_print_comb(void)
{
    char    seven;
    char    eight;
    char    nine;

    seven = '0';
    while (seven <= '7')
    {
        eight = seven + 1;
        while (eight <= '8')
        {
            nine = eight + 1;
            while(nine <= '9')
            {
                ft_putnum(seven, eight, nine);
                nine++;
            }
            eight++;
        }
        seven++;
    }

}

int	main(void)
{
	ft_print_comb();
}
