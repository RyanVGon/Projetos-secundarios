#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    int ra;
    char nome[50];
    int idade;
    float mensalidade;
} Aluno;

Aluno alunos[50];
int NUM_ALUNOS = 0;
int TAMANHO = sizeof(alunos) / sizeof(Aluno);

int search(int ra);
void mostrarAluno(Aluno aluno);
float somarMensalidades();
float calcularMediaMensalidade();
float encontrarMaiorMensalidade();
float encontrarMenorMensalidade();
int contarAlunos();
void imprimirMensalidadeMaiorQueX(float valor);

int main() {
    int opcao = 0;
    int i = 0;
    int respInt = 0, temp = 0;
    char tempString[50];
    bool valido = false;
    
    for(i=0;i<TAMANHO;i++){
    	alunos[i].ra = -1;
    	alunos[i].idade = -1;
    	alunos[i].mensalidade = -1;
    	strcpy(alunos[i].nome, "");
	}

    do {
        printf("\n");
        printf("MENU SYSACAD\n");
        printf("1. Inserir\n");
        printf("2. Alterar\n");
        printf("3. Excluir\n");
        printf("4. Pesquisar (ra)\n");
        printf("5. Imprimir todas\n");
        printf("6. Somar mensalidades\n");
        printf("7. Número alunos cadastrados\n");
        printf("8. Valor médio mensalidade\n");
        printf("9. Valor maior mensalidade\n");
        printf("10. Valor menor mensalidade\n");
        printf("11. Mensalidade maior valor\n");
        printf("12. Mensalidade menor valor\n");
        printf("13. Imprimir mensalidade valor maior que X\n");
        printf("20. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                temp = -1;
                valido = true;
                if (NUM_ALUNOS >= TAMANHO) {
                    printf("\nLimite de alunos atingido\n\n");
                    break;
                }
                for (i = 0; i < TAMANHO; i++) {
                    if (alunos[i].ra == -1) {
                        temp = i;
                        break;
                    }
                }
                if (temp == -1) {
                    printf("\nVetor lotado\n\n");
                    system("pause");
                } else {
                    printf("Digite o RA do aluno: ");
                    scanf("%d", &respInt);
                    for (i = 0; i < TAMANHO; i++) {
                        if (respInt == alunos[i].ra) {
                            valido = false;
                            break;
                        }
                    }

                    if (valido) {
                        alunos[temp].ra = respInt;

                        printf("Digite o nome do aluno: ");
                        scanf(" %[^\n]s", alunos[temp].nome);

                        printf("Digite a idade do aluno: ");
                        scanf("%d", &alunos[temp].idade);

                        printf("Digite o valor da mensalidade: ");
                        scanf("%f", &alunos[temp].mensalidade);

                        NUM_ALUNOS++;
                    } else {
                        printf("RA ja existe\n\n");
                        system("pause");
                    }
                }
                break;

            case 2:
                valido = true;
                printf("Digite o RA do aluno: ");
                scanf("%d", &respInt);

                temp = search(respInt);

                if (temp == -1) {
                    printf("Aluno nao encontrado\n\n");
                    system("pause");
                } else {
                    printf("VALOR ANTERIOR:\n");
                    mostrarAluno(alunos[temp]);

                    printf("Digite o novo RA do aluno: ");
                    scanf("%d", &respInt);
                    for (i = 0; i < TAMANHO; i++) {
                        if ((respInt == alunos[i].ra) && (i != temp)) {
                            valido = false;
                            break;
                        }
                    }

                    if (valido) {
                        alunos[temp].ra = respInt;

                        printf("Digite o novo nome do aluno: ");
                        scanf(" %[^\n]s", alunos[temp].nome);

                        printf("Digite a nova idade do aluno: ");
                        scanf("%d", &alunos[temp].idade);

                        printf("Digite o novo valor da mensalidade: ");
                        scanf("%f", &alunos[temp].mensalidade);
                    } else {
                        printf("RA ja existe ou e invalido\n\n");
                        system("pause");
                    }
                }
                break;

            case 3:
                printf("Digite o RA do aluno: ");
                scanf("%d", &respInt);

                temp = search(respInt);

                if (temp == -1) {
                    printf("Aluno nao encontrado\n\n");
                    system("pause");
                } else {
                    printf("ALUNO A SER DELETADO:\n");
                    mostrarAluno(alunos[temp]);

                    printf("Digite 1 para deletar: ");
                    scanf("%d", &respInt);
                    if (respInt == 1) {
                        alunos[temp].ra = -1;
                        strcpy(alunos[temp].nome, "");
                        alunos[temp].idade = 0;
                        alunos[temp].mensalidade = 0;
                        NUM_ALUNOS--;
                        printf("Aluno deletado com sucesso!!\n\n");
                        system("pause");
                    }
                }
                break;

            case 4:
                printf("Digite o RA do aluno: ");
                scanf("%d", &respInt);

                temp = search(respInt);

                if (temp == -1) {
                    printf("Aluno nao encontrado\n\n");
                    system("pause");
                } else {
                    printf("Aluno pesquisado:\n");
                    mostrarAluno(alunos[temp]);
                }
                break;

            case 5:
                printf("\nRA       |NOME                            |IDADE |MENSALIDADE\n");
                printf("---------|--------------------------------|------|------------\n");
                for (i = 0; i < NUM_ALUNOS; i++) {
                    if (alunos[i].ra != -1) {
                        printf("%-9d|%-32s|%-6d|%-12.2f\n", alunos[i].ra, alunos[i].nome, alunos[i].idade, alunos[i].mensalidade);
                    }
                }
                printf("\n");
                system("pause");
                break;

            case 6:
                printf("Soma das mensalidades: %.2f\n", somarMensalidades());
                system("pause");
                break;

            case 7:
                printf("Numero de alunos cadastrados: %d\n", contarAlunos());
                system("pause");
                break;

            case 8:
                printf("Valor medio da mensalidade: %.2f\n", calcularMediaMensalidade());
                system("pause");
                break;

            case 9:
                printf("Valor maior mensalidade: %.2f\n", encontrarMaiorMensalidade());
                system("pause");
                break;

            case 10:
                printf("Valor menor mensalidade: %.2f\n", encontrarMenorMensalidade());
                system("pause");
                break;

            case 11:
			    printf("Mensalidade maior valor:\n");
			
			    float maiorMensalidade = encontrarMaiorMensalidade();
			
			    for (i = 0; i < NUM_ALUNOS; i++) {
			        if (alunos[i].mensalidade == maiorMensalidade) {
			            mostrarAluno(alunos[i]);
			        }
			    }
			    break;
		
			case 12:
			    printf("Mensalidade menor valor:\n");
			
			    float menorMensalidade = encontrarMenorMensalidade();
			
			    for (i = 0; i < NUM_ALUNOS; i++) {
			        if (alunos[i].mensalidade == menorMensalidade) {
			            mostrarAluno(alunos[i]);
			        }
			    }
			    break;

            case 13:
                printf("Digite o valor para comparar: ");
                float valorX;
                scanf("%f", &valorX);
                imprimirMensalidadeMaiorQueX(valorX);
                system("pause");
                break;

            case 20:
                printf("Saindo...\n");
                break;
        }
    } while (opcao != 20);

    return 0;
}

int search(int ra) {
    int temp = -1;
    int i = 0;
    for (i = 0; i < NUM_ALUNOS; i++) {
        if (ra == alunos[i].ra) {
            temp = i;
        }
    }
    return temp;
}

void mostrarAluno(Aluno aluno) {
    printf("\nRA                |NOME                            |IDADE |MENSALIDADE\n");
    printf("------------------|--------------------------------|------|------------\n");
    printf("%-18d|%-32s|%-6d|%-12.2f\n", aluno.ra, aluno.nome, aluno.idade, aluno.mensalidade);
}

float somarMensalidades() {
    float soma = 0;
    int i = 0;
    for (i = 0; i < NUM_ALUNOS; i++) {
        soma += alunos[i].mensalidade;
    }
    return soma;
}

float calcularMediaMensalidade() {
    return somarMensalidades() / contarAlunos();
}

float encontrarMaiorMensalidade() {
    float maiorMensalidade = alunos[0].mensalidade;
	int i = 0;
    for (i = 1; i < NUM_ALUNOS; i++) {
        if (alunos[i].mensalidade > maiorMensalidade) {
            maiorMensalidade = alunos[i].mensalidade;
        }
    }

    return maiorMensalidade;
}

float encontrarMenorMensalidade() {
    float menorMensalidade = alunos[0].mensalidade;
	int i = 0;
    for (i = 1; i < NUM_ALUNOS; i++) {
        if (alunos[i].mensalidade < menorMensalidade) {
            menorMensalidade = alunos[i].mensalidade;
        }
    }

    return menorMensalidade;
}

int contarAlunos() {
    int cont = 0;
    int i = 0;
    for (i = 0; i < NUM_ALUNOS; i++) {
        if (alunos[i].ra != -1) {
            cont++;
        }
    }
    return cont;
}

void imprimirMensalidadeMaiorQueX(float valor) {
	int i = 0;
    printf("\nRA       |NOME                            |IDADE |MENSALIDADE\n");
    printf("---------|--------------------------------|------|------------\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        if (alunos[i].ra != -1 && alunos[i].mensalidade > valor) {
            printf("%-9d|%-32s|%-6d|%-12.2f\n", alunos[i].ra, alunos[i].nome, alunos[i].idade, alunos[i].mensalidade);
        }
    }
    printf("\n");
}

