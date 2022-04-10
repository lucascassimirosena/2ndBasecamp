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
O exercício pede uma função que mostre 'N' ou 'P' segundo o sinal do inteiro passado como parâmetro.
Se n for negativo, devemos indicar 'N'. Se n for positivo, devemos indicar 'P'.


Neste exercício, falaremos sobre condicional, diremos ao programa "Se isso, faça isso"
Usaremos "if" para construir a condicional.
*/

// Criado por lucassim

#include <unistd.h>

void    ft_is_negative (int n)          // Criamos uma função que irá receber um inteiro como parâmetro
{                                      //
    if(n < 0)                         // Dizemos então que se o n menor que zero, ou seja negativo
    {                                //
        write(1, "N", 1);           // escreva "N" na saída principal
    }                              //
    else                          // Do contrário
        write(1, "P", 1);        // Escreva "P" na saída principal
}

/* TESTE

int main(void)
    {
        ft_is_negative(-3);
        return(0);
    }