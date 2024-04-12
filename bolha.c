//MÉTODO BOLHA
#include <stdio.h>
#include <string.h>

int main()
{
    char nome[5][10];
    char temp[10]; // Variável temporária para troca de nomes
    int i, j;

    // COLETA DE NOMES
    for(i = 0; i < 5; i++)
    {
        printf("Nome: ");
        fgets(nome[i], 10, stdin);
    }

    // CLASSIFICAR NOMES
    for(i = 0; i < 5 ; i++)
    {
        for(j = i +1 ; j < 5; j++)
        {
            if(strcmp(nome[i], nome[j]) > 0)
            {
                // Trocar os nomes de posição
                strcpy(temp, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], temp);
            }
        }
    }

    // EXIBIR NOMES ORDENADOS
    printf("\nNomes ordenados:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%s", nome[i]);
    }

    return 0;
}
