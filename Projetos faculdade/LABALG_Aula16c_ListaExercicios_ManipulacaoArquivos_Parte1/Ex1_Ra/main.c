#include <stdio.h>
#include <string.h>

#define MAX_RAS 100

typedef struct {
    int ra;
    char nome[30];
} Aluno;

Aluno ras[MAX_RAS];
int numAlunos = 0;
int i;

int buscarPosicaoVazia() {
    for (i = 0; i < MAX_RAS; ++i) {
        if (ras[i].ra == 0) {
            return i; // Retorna o índice da posição vazia
        }
    }
    return -1; // Retorna -1 se não houver posição vazia
}

int buscarAlunoPorRA(int ra) {
    for (i = 0; i < MAX_RAS; ++i) {
        if (ras[i].ra == ra) {
            return i; // Retorna o índice do aluno encontrado
        }
    }
    return -1; // Retorna -1 se o aluno não for encontrado
}

void inserirAluno() {
    int ra;
    printf("Digite o RA do aluno: ");
    scanf("%d", &ra);

    int posicaoVazia = buscarPosicaoVazia();

    if (posicaoVazia != -1) {
        if (buscarAlunoPorRA(ra) == -1) {
            ras[posicaoVazia].ra = ra;
            printf("Digite o nome do aluno: ");
            scanf("%s", ras[posicaoVazia].nome);
            printf("Aluno inserido com sucesso!\n");
            numAlunos++;
        } else {
            printf("RA ja existente. Insercao nao realizada.\n");
        }
    } else {
        printf("Limite de alunos atingido. Nao e possivel inserir mais alunos.\n");
    }
}

void alterarAluno() {
    int raOrigem, raDestino;
    printf("Digite o RA do aluno de origem: ");
    scanf("%d", &raOrigem);

    int indiceAlunoOrigem = buscarAlunoPorRA(raOrigem);

    if (indiceAlunoOrigem != -1) {
        printf("Digite o novo RA do aluno: ");
        scanf("%d", &raDestino);

        if (buscarAlunoPorRA(raDestino) == -1) {
            ras[indiceAlunoOrigem].ra = raDestino;
            printf("RA alterado com sucesso!\n");
        } else {
            printf("RA de destino ja existente. Alteracao nao realizada.\n");
        }
    } else {
        printf("Aluno nao encontrado. Alteracao nao realizada.\n");
    }
}

void excluirAluno() {
    int ra;
    printf("Digite o RA do aluno que deseja excluir: ");
    scanf("%d", &ra);

    int indiceAluno = buscarAlunoPorRA(ra);

    if (indiceAluno != -1) {
        ras[indiceAluno].ra = 0; // Remove o aluno
        printf("Aluno excluido com sucesso!\n");
        numAlunos--;
    } else {
        printf("Aluno nao encontrado. Exclusao nao realizada.\n");
    }
}

void pesquisarAluno() {
    int ra;
    printf("Digite o RA do aluno que deseja pesquisar: ");
    scanf("%d", &ra);

    int indiceAluno = buscarAlunoPorRA(ra);

    if (indiceAluno != -1) {
        printf("Aluno encontrado!\n");
        printf("RA: %d\n", ras[indiceAluno].ra);
        printf("Nome: %s\n", ras[indiceAluno].nome);
    } else {
        printf("Aluno nao encontrado.\n");
    }
}

void imprimirAnalitico() {
    printf("Relatorio Analitico de Alunos:\n");
    printf("Posicao    | RA         | Nome\n");
    printf("-----------|------------|--------------\n");

    for (i = 0; i < MAX_RAS; ++i) {
        printf("%-11d| %-11d| %-20s\n", i + 1, ras[i].ra, ras[i].ra ? ras[i].nome : "");
    }
}

void imprimirSintetico() {
    printf("Relatorio Sintetico de Alunos:\n");
    printf("RA         | Nome\n");
    printf("-----------|--------------\n");

    for (i = 0; i < MAX_RAS; ++i) {
        if (ras[i].ra != 0) {
            printf("%-11d| %-20s\n", ras[i].ra, ras[i].nome);
        }
    }
}

void contarAlunos() {
    printf("Total de alunos cadastrados: %d\n", numAlunos);
}

void salvarEmBanco() {
    FILE *arquivo = fopen("alunos.txt", "w");

    if (arquivo != NULL) {
        for (i = 0; i < MAX_RAS; ++i) {
            if (ras[i].ra != 0) {
                fprintf(arquivo, "%d %s\n", ras[i].ra, ras[i].nome);
            }
        }
        fclose(arquivo);
        printf("Dados salvos em banco com sucesso!\n");
    } else {
        printf("Erro ao abrir o arquivo para salvar.\n");
    }
}

void carregarDoBanco() {
    FILE *arquivo = fopen("alunos.txt", "r");

    if (arquivo != NULL) {
        while (fscanf(arquivo, "%d %s", &ras[numAlunos].ra, ras[numAlunos].nome) != EOF) {
            numAlunos++;
        }
        fclose(arquivo);
        printf("Dados carregados do banco com sucesso!\n");
    } else {
        printf("Arquivo de dados nao encontrado. Nao foi possivel carregar os dados.\n");
    }
}

int main() {
    int opcao;
    for(i=0;i<MAX_RAS;i++){
    	ras[i].ra = 0;
    	strcpy(ras[i].nome, "");
	}

    do {
        printf("\nCONTROLE DE RAs - Sistema de Alunos\n");
        printf("1. Inserir\n");
        printf("2. Alterar\n");
        printf("3. Excluir\n");
        printf("4. Pesquisar\n");
        printf("5. Imprimir Analitico\n");
        printf("6. Imprimir Sintetico\n");
        printf("7. Contar\n");
        printf("8. Salvar em Banco\n");
        printf("9. Carregar do Banco\n");
        printf("20. Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirAluno();
                break;
            case 2:
                alterarAluno();
                break;
            case 3:
                excluirAluno();
                break;
            case 4:
                pesquisarAluno();
                break;
            case 5:
                imprimirAnalitico();
                break;
            case 6:
                imprimirSintetico();
                break;
            case 7:
                contarAlunos();
                break;
            case 8:
                salvarEmBanco();
                break;
            case 9:
                carregarDoBanco();
                break;
            case 20:
                printf("Saindo do sistema.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 20);

    return 0;
}

