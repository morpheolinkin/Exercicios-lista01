#include <stdio.h>

int main()
{
    printf("\t\t================================================\n");
    printf("\n\t\t\t COMPARANDO OS NUMEROS \n\n");
    printf("\t\t================================================\n\n");

    printf("Questao 2.18 da lista - Prof. Diego\n\n");

    int num1, num2;

    printf("informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("informe o segundo numero: ");
    scanf("%d", &num2);

    if (num1>num2)
        printf("O primeiro numero %d e maior", num1);


        if (num2> num1)
            printf("O segundo numero %d e maior", num2);


            if (num1==num2)
                printf("Estes numeros sao iguais!");


return 0;

}
