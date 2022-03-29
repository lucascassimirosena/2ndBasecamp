/*

Escrever um programa que leia um inteiro entre 1 e 12 e imprimir o mes 
correspondente a esse numero. Portanto se janeiro, 1 e assim por diante.

*/

#include <stdio.h>

int main()
{
    int mes;
    char * resultado;
    printf("Digite um numero de 1 a 12\n");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        resultado = "janeiro";
  
        break;

    case 2:
    resultado = "fevereiro";
  
    break;
    
    default:
        break;


    }
    printf("%s", resultado);
}