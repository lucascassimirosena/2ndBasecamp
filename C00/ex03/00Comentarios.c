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
/*
você pode usar o comando gcc *.c para compilar o arquivo.
não esqueça de rodar o comando "norminette" para verificar se tudo esta de acordo com a norma
*/

//Mesmo exercício que o ex02 só que com números.

#include <unistd.h>

void    ft_print_numbers (void)
{
    int n = '0';
    while( n <= '9')
    {
        write(1, &n, 1);
        n++;
    }
}

/* TESTE

int main (void)
    {
        ft_print_numbers();
        return(0);
    }
*/