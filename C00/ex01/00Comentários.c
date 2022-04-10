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

/*
O exercício 01 pede uma função que mostre o alfabeto em minúsculo em apenas uma linha,
em ordem crescente, começando com a letra 'a'.

Para isso, é necessário saber que cada letra corresponde a um número dentro da tabela ASCII
sabendo disso, ao pesquisar pela tabela, vemos que o número 'a' corresponde ao número 97 e o
último número corresponde ao número 122.

Dessa forma precisamos criar um laço que some +1 ao número a cada vez que o programa for executado e
que pare de executar ao chegar no número 122.

Somos apenas autorizados a utilizar while nos nossos programas.
Não esqueça de deixar apenas os arquivos solicitados no pdf na pasta ao enviar para defesa.

*/

//Criado por lucassim

#include <unistd.h>
{
    char letters;                    //criei uma variável do tipo char(caracteres) e a nomei de letter
                                    //
    letter = 97;                   //atribuí o valor 97(a) a essa variavel
    while(letter <= 122)          //aqui eu disse: enquanto letter for menor ou igual a 122
    {                            //
        write(1, &letter, 1)    //escreva 1 cractere que esta no endereço de letter e o mostre na saída principal
        letter++;              // e incremente +1
    }                         //este bloco será executado até que o número incrementado alcance 122, ou seja, a letra 'z'.
}

/* TESTE

int main (void)
{
    ft_print_alphabet();
    return(0);
}

*/