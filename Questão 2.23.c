#include <stdio.h>

int main()
{
    printf("\t\t================================================\n");
    printf("\n\t\t\t MAIOR OU MENOR ENTRE OS NUMEROS \n\n");
    printf("\t\t================================================\n\n");

    printf("Questao 2.23 da lista - Prof. Diego\n\n");

    int a, b, c, d, e, maior=0, menor=a;

    printf("informe cinco numeros dando espaco, em seguida pressione enter: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("\nos valores informados sao: %d, %d, %d, %d e %d\n", a, b, c, d, e);


    if (a> maior)
        maior = a;
    if (a<menor)
        menor = a;

    if (b>maior)
        maior = b;

    if (b<menor)
        menor = b;

    if (c>maior)
        maior = c;

    if (c<menor)
        menor = c;

    if (d>maior)
        maior = d;

    if(d<menor)
        menor = d;

    if (e>maior)
        maior = e;

    if (e<menor)
        menor = e;


    printf("\n O maior numero entre eles e: %d\n", maior);
    printf("\n O menor numero entre eles e: %d\n", menor);
return 0;

}
