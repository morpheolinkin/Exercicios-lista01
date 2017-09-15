#include <stdio.h>
#include<locale.h>

int main()
    setlocale(LC_ALL, "portuguese");
{
    printf("\t\t================================================\n");
    printf("\n\t\t\t    SENHOR OU SENHORA  \n\n");
    printf("\t\t================================================\n\n");

    printf("\nQuestão 03 da lista - Prof. Diego\n\n");

    char nome [100];
    int sexo;

    printf("informe seu nome: ");
    scanf("%s", &nome);

    printf("informe seu sexo: [1] para masculino; [2] para feminino  : ");
    scanf("%d", &sexo);

    if (sexo == 1) {
        printf("Ilmo. sr.%s ", nome);
    }
    else {
        if (sexo == 2){
            printf("Ilma. sra. %s ", nome);
        }
          else {
            printf("alguma coisa errada!");
          }
    }


return 0;
}
