/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucassim <lucassim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 01:45:30 by lucassim          #+#    #+#             */
/*   Updated: 2022/04/18 18:22:37 by lucassim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Neste exercício devemos reproduzir de forma idêntica o funcionamento da função
strcpy (man strcpy).

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

char    *ft_strcpy(char *dest, char *src);

*/

//Criado por lucassim.

#include <unistd.h>

char *ft_strcpy(char *dest, char *src)         // Beleza, temos que trabalhar
{                                             // baseado na prototipagems do pdf
    int i;                                   // Criamos a variável i, que funcionará como um contador
                                            // Atribuimos o valor inicial de 0.
    i = 0;                                 //
    while(src[i] != '\0')                 // Enquanto src[i] for diferente de '\0' (caracter nulo), faça 
    {                                    //
        dest[i] = src[i];               // com que dest[i] seja igual a src[i]
        i++;                           // e incremente i em 1. Agora o i será incrementado até não haver mais
    }                                 //    valores a adicionar e atingir o caractére nulo (fim).
    dest[i] = '\0';                  // Ao atingir o tamanho o fim, saimos do laço e dest tem o valor de '\0'.
    return(dest);                   // Retornamos o dest.
}