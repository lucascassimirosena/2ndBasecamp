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

//criado por lucassim
#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char alp;

    alp = 'z'; 
    while(alp >= 'a')
    {
        write(1, &alp, 1)
        alp--;
    }
}