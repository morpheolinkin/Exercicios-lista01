#include <stdio.h>

int main()
{
    printf("\t\t================================================\n");
    printf("\n\t\t\t VERIFICACAO DE MULTIPLO  \n\n");
    printf("\t\t================================================\n\n");

    printf("\nQuestao 2.26 da lista - Prof. Diego\n\n");

    int numero=0, multiplo=0;

printf ("Este programa verifica se um determinado n�mero � m�ltiplo de outro.\n\n");

	printf("\nO numero ");//pede o n�mero
	scanf ("%d", &numero);//armazena na vari�vel "numero"
	printf("\nE multiplo de ");//pede o m�ltiplo
	scanf ("%d", &multiplo);//armazena na vari�vel "multiplo"

	if (numero%multiplo==0){//verifica se o resto da divis�o de "numero" por "multiplo" � 0
		printf ("\n\nResposta: SIM");//se sim, envia a mensagem dizendo que � m�ltiplo
	}
	else
	{
		printf ("\n\nResposta: NAO");//sen�o, envia a mensagem dizendo que n�o � m�ltiplo
	}

	printf ("\n\n");//pula duas linhas
	system("pause");
    return 0;
}
