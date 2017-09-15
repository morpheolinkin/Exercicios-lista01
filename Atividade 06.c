#include <stdio.h>

int main()
{
    printf("\t\t============================================\n");
    printf("\n\t\t FUNCAO PARA DEFINIR OS LADOS UM TRIANGULO  \n\n");
    printf("\t\t============================================\n\n");

    printf("\nQuestao 06 da lista - Prof. Diego\n\n");

    int l1, l2, l3;
    printf ("informe o primeiro lado:\n ");
    scanf  ("%d",&l1);

    printf ("informe o segundo lado:\n ");
    scanf  ("%d",&l2);

    printf ("informe o terceiro lado:\n ");
    scanf  ("%d",&l3);

    if  ((l1==l2) & (l1==l3))
    {
        printf ("Equilatero");
    }
    if  ((l1!=l2)&(l2!=l3)&(l1!=l3))
    {
        printf ("Escaleno");
    }
    if  ((l1==l2)&(l1!=l3)|(l1==l3)&(l1!=l2))
    {
        printf ("Isosceles");
    }

    return 0;
}



