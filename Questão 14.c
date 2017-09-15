#include <stdio.h>
#include <math.h>

int main()
{
    printf("\t\t================================================\n");
    printf("\n\t\t\t QUADRADO & RAIZ QUADRADA\n\n");
    printf("\t\t================================================\n");

    printf("Questao 14 da lista - Prof. Diego\n\n");


    int num1, num2, menor;
    float maior;

    printf("informe o primeiro numenro: ");
    scanf("%d", &num1);
    printf("informe o segundo numenro: ");
    scanf("%d", &num2);


    if (num1 > num2){
        maior = num1;
        menor = num2;
    }
    else {
        maior = num2;
        menor = num1;
    }
        printf("O quadrado do menor e: %d\n", menor*menor);
        printf("A raiz quadrada do maior e: %0.2f\n", sqrt(maior));

    return (0);
    }




