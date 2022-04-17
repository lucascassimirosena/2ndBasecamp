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
Neste exercício devemos escrever uma função que mostre, em ordem crescente, todas as diferentes
combinações de três nuúmeros diferentes em ordem crescente - sim, a repetição é proposital.

Isso resulta em algo do tipo:
012, 013, 014, 015, 016, 017, 018, 019, 023, ... 789

987 fica de fora porque o 789 já está presente.

999 fica de fora porque esse número não tem exclusivamente números diferentes uns
dos outros.

Ela deve ser prototipada da seguinte maneira:
void ft_print_comb(void):


As pegadinhas dessa tarefa são que do número 19 existe um salto para o 23 e que a vírgula deve parar ao alcançar
o número 789.

*/

// Criado por lucassim

#include <unistd.h>

void    ft_putnum(char a, char b, char c)           // A primeira coisa que fazemos é
{                                                  // criar uma função que tenha 3 char como
    write(1, &a, 1);                              // parâmetros, neste caso usamos a função write
    write(1, &b, 1);                             // para poder escrever.
    write(1, &c, 1);                            
    if (!(a == '7' && b == '8' && c == '9'))           // Como devemos parar ao chegar em 789
    {                                                 // criamos essa condicional IF dizendo que
        write(1, ", ", 2);                           // enquanto os números não forem 7, 8 ou 9 ela
    }                                               // escreve vírgula. ! significa NÃO.
}                                                  // Ou seja, enquanto não for 7,8,9 escreva a vírgula.

void ft_print_comb(void)        
{                              
    char    seven;            // Aqui criamos as três variáveis que iremos
    char    eight;           // usar para respresentar os números que queremos.
    char    nine;           

    seven = '0';                      // Digo que seven = '0' e coloco entre aspas siples pois se trata de um char
    while (seven <= '7')             // Enquanto seven for menor ou igual a '7'
    {
        eight = seven + 1;         // Eight vale seven + um. Dessa forma o valor de eight vai aumentar como no exemplo.
        while (eight <= '8')      // Enquanto eight for menor ou igual a '8'
        {
            nine = eight + 1;             // nine vale eight + 1 assim os 3 números serão alterados simultaneamente
            while(nine <= '9')           // enquanto nine for menor ou igual a nove
            {
                ft_putnum(seven, eight, nine);  // execute a função que escreverá cada char e a vírgula
                nine++;                        // Incremente um em nine.
            }
            eight++;             // Incremente um em eight
        }
        seven++;               // Incremente um em seven
    }

}


/* TESTE
int	main(void)
{
	ft_print_comb();
}
*/


