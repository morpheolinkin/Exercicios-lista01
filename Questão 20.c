#include <stdio.h>

int main ()
{

    printf("\t\t================================================\n");
    printf("\n\t\t\t   CARTEIRA DE MOTORISTA\n\n");
    printf("\t\t================================================\n\n");

    printf("Questao 20 da lista - Prof. Diego\n\n");

    int idade;
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade>18)
        printf("ja tem direito a habilitacao ha %d anos", idade-18);

    if (idade<18)
        printf("Nao tem direito, ainda falta %d anos", 18-idade);


 return 0;
}
