#include <stdio.h>

int main()
{
    printf("\t\t================================================\n");
    printf("\n\t\t\t VERIFICACAO DE MULTIPLO  \n\n");
    printf("\t\t================================================\n\n");

    printf("\nQuestao 2.26 da lista - Prof. Diego\n\n");

    int numero=0, multiplo=0;

printf ("Este programa verifica se um determinado número é múltiplo de outro.\n\n");

	printf("\nO numero ");//pede o número
	scanf ("%d", &numero);//armazena na variável "numero"
	printf("\nE multiplo de ");//pede o múltiplo
	scanf ("%d", &multiplo);//armazena na variável "multiplo"

	if (numero%multiplo==0){//verifica se o resto da divisão de "numero" por "multiplo" é 0
		printf ("\n\nResposta: SIM");//se sim, envia a mensagem dizendo que é múltiplo
	}
	else
	{
		printf ("\n\nResposta: NAO");//senão, envia a mensagem dizendo que não é múltiplo
	}

	printf ("\n\n");//pula duas linhas
	system("pause");
    return 0;
}
