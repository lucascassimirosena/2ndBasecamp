/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassim <lucassim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:32:32 by lucassim          #+#    #+#             */
/*   Updated: 2022/04/18 22:11:33 by lucassim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Neste exercício devemos reproduzir de forma idêntica o funcionamento da função
strcpy (man strcpy). Como no anterior.

Para isso, é necessário verificar o que diabos essa função faz.
Veja o manual do strcpy: https://man7.org/linux/man-pages/man3/strcpy.3.html

    " The strcpy() function copies the string pointed to by src,
       including the terminating null byte ('\0'), to the buffer pointed
       to by dest.  The strings may not overlap, and the destination
       string dest must be large enough to receive the copy.  Beware of
       buffer overruns!  (See BUGS.)"

Significa que ela copia o que está em src, e coloca no ponteiro de dest. 

Portanto devemos criar uma váriavel que copie o valor de *src para *dest.
Esta váriável deve ter o mesmo tamanho um do outro.

A função deve ser prototipada desta maneira:

char    *ft_strcpy(char *dest, char *src, unsigned int n);
A diferença aqui, é o unsigned int n.

O que é um unsigned int?
É um int que pode conter um valor de inteiro entre 0 e 4.294.967.295.

*/

//Criado por lucassim.


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;                  // Criaremos primeiros o unsigned int
                                       //
	i = 0;                            // e atribuiremos um valor inicial
	while (i < n && src[i] != '\0')  // enquanto i for menor que n e src[i] for
	{                               // diferente do vlaor nulo.
		dest[i] = src[i];          // dest[i] tem o mesmo valor que src[i]
		i++;                      // e incremente 1 em i.
	}                            //
	while (i < n)               // Enquanto o n for menor que i
	{                          //
		dest[i] = '\0';       // dest é igual ao nulo
		i++;                 //	incremente i em um.
	}                       //
	return (dest);         // retorne o valor de dest.
}