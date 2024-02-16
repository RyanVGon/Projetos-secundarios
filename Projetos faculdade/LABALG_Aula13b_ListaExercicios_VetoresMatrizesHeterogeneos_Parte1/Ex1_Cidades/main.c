#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    int codigo;
    char nome[30];
    int numHabitantes;
} Cidade;

Cidade vetor[10];
int TAMANHO = sizeof(vetor) / sizeof(Cidade);

int search(int codigo);
void mostrarCidade(Cidade cidade);


int main() {
    int opcao = 0;
    int i = 0;
    int respInt = 0, temp = 0;
    char tempString[30];
    bool valido = false;

	for(i=0;i<TAMANHO;i++){
		vetor[i].codigo = -1;
		strcpy(vetor[i].nome, "");
		vetor[i].numHabitantes = -1;
	}


    do {
        printf("\n");
        printf("..:: MENU ::..        \n");
        printf("1. Inserir            \n");
        printf("2. Alterar            \n");
        printf("3. Excluir            \n");
        printf("4. Pesquisar (codigo) \n");
        printf("5. Imprimir todas     \n");
        printf("9. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                temp = -1;
                valido = true;
                for (i = 0; i < TAMANHO; i++) {
                    if (vetor[i].codigo == -1) {
                        temp = i;
                        break;
                    }
                }
                if (temp == -1) {
                    printf("\nVetor lotado\n\n");
                    system("pause");
                } else {
                    printf("Digite o codigo da cidade: ");
                    scanf("%d", &respInt);
                    for (i = 0; i < TAMANHO; i++) {
                        if (respInt == vetor[i].codigo) {
                            valido = false;
                            break;
                        }
                    }

                    if (valido) {
                        vetor[temp].codigo = respInt;

                        printf("Digite o nome da cidade: ");
                        scanf("%s", vetor[temp].nome);

                        printf("Digite o numero de habitantes: ");
                        scanf("%d", &vetor[temp].numHabitantes);
                    } else {
                        printf("Codigo ja existe\n\n");
                        system("pause");
                    }
                }
                break;

            case 2:
                valido = true;
                printf("Digite o codigo da cidade: ");
                scanf("%d", &respInt);

                temp = search(respInt);

                if (temp == -1) {
                    printf("Cidade nao encontrada\n\n");
                    system("pause");
                } else {
                    printf("VALOR ANTERIOR:\n");
                    mostrarCidade(vetor[temp]);

                    printf("Digite o novo codigo da cidade: ");
                    scanf("%d", &respInt);
                    for (i = 0; i < TAMANHO; i++) {
                        if ((respInt == vetor[i].codigo) && (i != temp)) {
                            valido = false;
                            break;
                        }
                    }

                    if (valido) {
                        vetor[temp].codigo = respInt;

                        printf("Digite o novo nome da cidade: ");
                        scanf("%s", vetor[temp].nome);

                        printf("Digite o novo numero de habitantes: ");
                        scanf("%d", &vetor[temp].numHabitantes);
                    } else {
                        printf("Codigo ja existe ou e invalido\n\n");
                        system("pause");
                    }
                }
                break;

            case 3:
                printf("Digite o codigo da cidade: ");
                scanf("%d", &respInt);

                temp = search(respInt);

                if (temp == -1) {
                    printf("Cidade nao encontrada\n\n");
                    system("pause");
                } else {
                    printf("CIDADE A SER DELETADA:\n");
                    mostrarCidade(vetor[temp]);

                    printf("Digite 1 para deletar: ");
                    scanf("%d", &respInt);
                    if (respInt == 1) {
                        vetor[temp].codigo = -1;
                        strcpy(vetor[temp].nome, "");
                        vetor[temp].numHabitantes = 0;
                        printf("Cidade deletada com sucesso!!\n\n");
                        system("pause");
                    }
                }
                break;

            case 4:
                printf("Digite o codigo da cidade: ");
                scanf("%d", &respInt);

                temp = search(respInt);

                if (temp == -1) {
                    printf("Cidade nao encontrada\n\n");
                    system("pause");
                } else {
                    printf("Cidade pesquisada:\n");
                    mostrarCidade(vetor[temp]);
                }
                break;

            case 5:
                printf("\nCODIGO    |NOME                |NUMERO DE HABITANTES\n");
                printf("----------|--------------------|--------------------\n");
                for (i = 0; i < TAMANHO; i++) {
                    if (vetor[i].codigo != -1) {
                        printf("%-10d|%-20s|%-20d\n", vetor[i].codigo, vetor[i].nome, vetor[i].numHabitantes);
                    }
                }
                printf("\n");
                system("pause");
                break;

            case 9:
                printf("Saindo...\n");
                break;
        }
    } while (opcao != 9);

    return 0;
}

int search(int codigo) {
    int temp = -1;
    int i;
    for (i = 0; i < TAMANHO; i++) {
        if ((codigo == vetor[i].codigo)) {
            temp = i;
        }
    }
    return temp;
}

void mostrarCidade(Cidade cidade) {
    printf("\nCODIGO              |NOME                |NUMERO DE HABITANTES\n");
    printf("--------------------|--------------------|--------------------\n");
    printf("%-20d|%-20s|%-20d\n", cidade.codigo, cidade.nome, cidade.numHabitantes);
}



