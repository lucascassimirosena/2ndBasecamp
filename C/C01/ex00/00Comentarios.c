/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassim <lucassim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:47:48 by lucassim          #+#    #+#             */
/*   Updated: 2022/04/13 01:58:32 by lucassim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
O exercício pede para escrevermos uma função que tenha um ponteiro para int em parâmetro
e dê ao int o valor de 42.

ela deve ser prototipada dessa maneira:
void    ft_ft(int *nbr);

para isso, iremos começar com a criação da função e colocarmos um ponteiro para 
o inteiro conforme no pdf.

dentro da funçã basta criar um ponteiro para o inteiro
fazemos isso colocando "*" e o valor 42 dentro dele.
*/

void    ft_ft(int *nbr)
{
    *nbr = 42;
}
