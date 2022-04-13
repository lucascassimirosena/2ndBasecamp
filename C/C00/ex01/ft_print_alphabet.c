/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassim <lucassim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:37:25 by lucassim          #+#    #+#             */
/*   Updated: 2022/04/08 16:37:33 by lucassim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Criado por lucassim

#include <unistd.h>

void    ft_print_alphabet(void)
{
    char letter;
    letter = 97;
    while(letter <= 122)
    {
        write(1, &letter, 1)
        letter++;
    }
}