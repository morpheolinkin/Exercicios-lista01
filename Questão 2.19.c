#include <stdio.h>

int main()
{
    printf("\t\t================================================\n");
    printf("\n\t\t\t CALCULADORA LCC  \n\n");
    printf("\t\t================================================\n\n");

    printf("Questao 2.19 da lista - Prof. Diego\n\n");

    int num1, num2, num3, maior, menor;

    printf("informe tres numeros dando espaco ou enter em cada um dele: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("os valores informados sao: %d, %d e %d\n", num1, num2, num3);

    menor = num1; //Para poder verificar o menor ou o maior
    maior = num1;

    printf("A soma dos numeros e: %d\n", num1+num2+num3);
    printf("A media dos numeros e: %d\n", (num1+num2+num3)/3);
    printf("O produto dos numeros e: %d\n", num1*num2*num3);
    if (num2 < menor)
        menor = num2;
    if (num2 > maior)
        maior = num2;
    if (num3 < menor)
        menor = num3;
    if (num3 > maior)
        maior = num3;
    printf ("O menor numero e : %d\n", menor);
    printf ("O maior numero e : %d\n", maior);
}

