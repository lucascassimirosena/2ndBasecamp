//Cabeçalho
#include <stdio.h>


int main()
{

    //Declarar variaveis:
    float altura;
    char sexo;

    float pesoIdeal;

    //Receber a entrada:


    printf("Digite o sexo: ");
    scanf("%c", &sexo);

    printf("Digite a altura: ");
    scanf("%f", &altura);


    //Condição:

    if(sexo == 'm')
    {
        pesoIdeal = 72.7 * altura - 58;
  
    }
    else
    {
        pesoIdeal = 62.1 * altura - 44.7;
    }



    printf("%f", pesoIdeal);

}