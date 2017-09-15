#include <stdio.h>
#include <stdlib.h>
#define Pi 3.14159

int main(void)
{
    printf("\t\t================================================\n");
    printf("\n\t\t\t Calculos de uma Circunferencia  \n\n");
    printf("\t\t================================================\n\n");

    printf("Questao 2.20 da lista - Prof. Diego\n\n");

    int diam, cir, area;
    float raio = 0;

    printf("informe o raio da circunferencia: ");
    scanf("%f", &raio);

    diam = raio*2;
    cir = Pi*diam;
    area = Pi*(raio*raio);

    printf("\n\nO diametro e: %d", diam);
    printf("\n\nO circuferencia e: %d", cir);
    printf("\n\nO area e: %0.3d\n", area);
    system("pause");


return 0;
}
