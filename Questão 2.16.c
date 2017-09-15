#include <stdio.h>

int main()
{
    printf("\t\t================================================\n");
    printf("\n\t\t\t CALCULOS DOS NUMEROS \n\n");
    printf("\t\t================================================\n\n");

    printf("Questao 2.16 da lista - Prof. Diego\n\n");

    int num1, num2;

    printf("informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("informe o segundo numero: ");
    scanf("%d", &num2);

    printf("A soma dos numeros e: %d\n", num1+num2);
    printf("A subitraçao dos numeros e: %d\n", num1-num2);
    printf("A divisao dos numeros e: %d\n", num1/num2);
    printf("O produto dos numeros e: %d\n", num1*num2);

return 0;
}
