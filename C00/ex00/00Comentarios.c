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
A primeira coisa a saber é que em C, a parte principal do programa é o main, parte que usaremos
para testar os programas e funções que faremos.

Outra coisa, todo programa usa um cabeçalho que começa com #inlcude <biblioteca> 

O primeiro exercício em C pede para que escrevamos uma função que mostre o caractere passado como parâmetro.
Ela deve ser prototipada como:

void     ft_putchar(char c);

para indicar o caractere, devemos usar a função write, e basicamente, neste exercício faremos uma espécie
de CTRL-C + CTRL+V pois ai ndo está no pdf.


você pode usar o comando gcc *.c para compilar o arquivo.
não esqueça de rodar o comando "norminette" para verificar se tudo esta de acordo com a norma

*/

//Criado por lucassim

#include <unistd.h> /* adicionamos o cabeçalho, esta biblioteca é a onde encontramos a função que utilizaremos
a função write */

void    ft_putchar (char c)  //escrevemos a função
{
    write(1, &c, 1) /*chamamos a função write, o primeiro número 1 significa que ele irá mostrar o caractere na saída principal, o monitor, o &c aponta para onde está esse caractere e
    o último 1 diz o tamanho desse caractere, neste caso 1 bite */
}


