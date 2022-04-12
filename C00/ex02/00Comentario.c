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
Neste exercício faremos exatamente a mesam coisa que no anterior porém de forma oposta
fiz uma modificação que funcionou da mesam forma.

O exercícoi pede para que o alfabeto seja escrito de trás para frente.

você pode usar o comando gcc *.c para compilar o arquivo.
não esqueça de rodar o comando "norminette" para verificar se tudo esta de acordo com a norma
*/

// Criado por lucassim

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char alp;

    alp = 'z'; //Dessa vez eu decidi simplesmente colocar direto o carácter 'z' ao invés do número ASCII correspondente
    while(alp >= 'a')
    {
        write(1, &alp, 1)
        alp--;
    }
}

/* TESTE

int main(void)
    {
        ft_print_reverse_alphabet();
        return(0);
    }
