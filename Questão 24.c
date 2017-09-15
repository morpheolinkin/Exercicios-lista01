#include <stdio.h>
#include<stdlib.h>

int main ()
{

    printf("\t\t================================================\n");
    printf("\n\t\t\t PERTENCE OU NAO AO INTERVALO\n\n");
    printf("\t\t================================================\n\n");

    printf("Questao 24 da lista 01 - Prof. Diego\n\n");

    int a, b, z;
    printf("informe o primeiro numenro: ");
    scanf("%d", &a);
    printf("informe o segundo numenro: ");
    scanf("%d", &b);
    printf("informe o terceiro valor para saber se esta no intervalo: ");
    scanf("%d", &z);


    if (z > a && z < b)
    {
        printf("O numero %d esta no intervalo!", z);
    }
    else
    {
        printf("O numero %d nao esta no intervalo entre %d e %d\n ",z, a, b);
    }


    return 0;
}
