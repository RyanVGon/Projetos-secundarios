#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 100

typedef struct {
    char cpf[12];
    char rg[10];
    char nome[30];
    int idade;
    char sexo;
    float salario;
} Cliente;

Cliente clientes[MAX_CLIENTES];
int numClientes = 0;
int i = 0;
int ret = 0;

int buscarClientePorCPF(const char *cpf) {
    for (i = 0; i < numClientes; ++i) {
        if (strcmp(clientes[i].cpf, cpf) == 0) {
            return i; // Retorna o índice do cliente encontrado
        }
    }
    return -1; // Retorna -1 se o cliente não for encontrado
}

int buscarPosicaoVazia() {
    for (i = 0; i < MAX_CLIENTES; ++i) {
        if (clientes[i].cpf[0] == '\0') {
            return i; // Retorna o índice da posição vazia
        }
    }
    return -1; // Retorna -1 se não houver posição vazia
}

void inserirCliente() {
    char cpf[12];
    printf("Digite o CPF do cliente: ");
    scanf("%s", cpf);

    int posicaoVazia = buscarPosicaoVazia();

    if (posicaoVazia != -1) {
        if (buscarClientePorCPF(cpf) == -1) {
            strcpy(clientes[posicaoVazia].cpf, cpf);
            printf("Digite o RG do cliente: ");
            scanf("%s", clientes[posicaoVazia].rg);
            printf("Digite o nome do cliente: ");
            scanf("%s", clientes[posicaoVazia].nome);
            printf("Digite a idade do cliente: ");
            scanf("%d", &clientes[posicaoVazia].idade);
            printf("Digite o sexo do cliente (M/F): ");
            scanf(" %c", &clientes[posicaoVazia].sexo);
            printf("Digite o salário do cliente: ");
            scanf("%f", &clientes[posicaoVazia].salario);
            printf("Cliente inserido com sucesso!\n");
            numClientes++;
        } else {
            printf("CPF ja existente. Insercao nao realizada.\n");
        }
    } else {
        printf("Limite de clientes atingido. Nao e possivel inserir mais clientes.\n");
    }
}

void alterarCliente() {
    char cpf[12];
    printf("Digite o CPF do cliente que deseja alterar: ");
    scanf("%s", cpf);

    int indiceCliente = buscarClientePorCPF(cpf);

    if (indiceCliente != -1) {
        printf("Digite o novo CPF do cliente: ");
        scanf("%s", clientes[indiceCliente].cpf);
		
        printf("Digite o novo RG do cliente: ");
        scanf(" %s", clientes[indiceCliente].rg);
        printf("Digite o novo nome do cliente: ");
        scanf(" %s", clientes[indiceCliente].nome);
        printf("Digite a nova idade do cliente: ");
        scanf(" %d", &clientes[indiceCliente].idade);
        printf("Digite o novo sexo do cliente (M/F): ");
        scanf(" %c", &clientes[indiceCliente].sexo);
        printf("Digite o novo salário do cliente: ");
        scanf(" %f", &clientes[indiceCliente].salario);
        printf("Cliente alterado com sucesso!\n");
        
    } else {
        printf("Cliente nao encontrado. Alteracao nao realizada.\n");
    }
}

void excluirCliente() {
    char cpf[12];
    printf("Digite o CPF do cliente que deseja excluir: ");
    scanf("%s", cpf);

    int indiceCliente = buscarClientePorCPF(cpf);

    if (indiceCliente != -1) {
        clientes[indiceCliente].cpf[0] = '\0'; // Remove o cliente
        printf("Cliente excluido com sucesso!\n");
        numClientes--;
    } else {
        printf("Cliente nao encontrado. Exclusao nao realizada.\n");
    }
}

void pesquisarClientePorCPF() {
    char cpf[12];
    printf("Digite o CPF do cliente que deseja pesquisar: ");
    scanf("%s", cpf);

    int indiceCliente = buscarClientePorCPF(cpf);

    if (indiceCliente != -1) {
        printf("Cliente encontrado!\n");
        printf("CPF: %s\n", clientes[indiceCliente].cpf);
        printf("RG: %s\n", clientes[indiceCliente].rg);
        printf("Nome: %s\n", clientes[indiceCliente].nome);
        printf("Idade: %d\n", clientes[indiceCliente].idade);
        printf("Sexo: %c\n", clientes[indiceCliente].sexo);
        printf("Salario: %.2f\n", clientes[indiceCliente].salario);
    } else {
        printf("Cliente nao encontrado.\n");
    }
}

void pesquisarClientePorNome() {
    char nome[30];
    printf("Digite o nome do cliente que deseja pesquisar: ");
    scanf("%s", nome);

    int encontrado = 0;

    printf("Clientes encontrados:\n");
    printf("CPF         | RG         | Nome\n");
    printf("------------|------------|--------------\n");

    for (i= 0; i < numClientes; ++i) {
        if (strstr(clientes[i].nome, nome) != NULL) {
            printf("%-12s| %-11s| %-20s\n", clientes[i].cpf, clientes[i].rg, clientes[i].nome);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nenhum cliente encontrado com esse nome.\n");
    }
}

void imprimirTodosClientes() {
    printf("Todos os Clientes:\n");
    printf("CPF         |RG         |Nome           |Idade|Sexo|Salario \n");
    printf("------------|-----------|---------------|-----|----|--------\n");

    for (i= 0; i < MAX_CLIENTES; ++i) {
        if (clientes[i].cpf[0] != '\0') {
            printf("%-12s|%-11s|%-15s|%-5d|%-4c|%-8.2f\n", clientes[i].cpf, clientes[i].rg,
                   clientes[i].nome, clientes[i].idade, clientes[i].sexo, clientes[i].salario);
        }
    }
}

void relatorioPorGenero() {
    int numClientesMasculino = 0;
    int numClientesFeminino = 0;
    int somaIdadesMasculino = 0;
    int somaIdadesFeminino = 0;
    float somaSalariosMasculino = 0.00;
    float somaSalariosFeminino = 0.00;

    for (i= 0; i < numClientes; ++i) {
        if (clientes[i].sexo == 'M') {
            numClientesMasculino++;
            somaIdadesMasculino += clientes[i].idade;
            somaSalariosMasculino += clientes[i].salario;
        } else if (clientes[i].sexo == 'F') {
            numClientesFeminino++;
            somaIdadesFeminino += clientes[i].idade;
            somaSalariosFeminino += clientes[i].salario;
        }
    }

    printf("Relatorio por Genero:\n");
    printf("MASCULINO:\n");
    printf("Numero de clientes: %d\n", numClientesMasculino);
    printf("Idade media: %.2f\n", (float)somaIdadesMasculino / numClientesMasculino);
    printf("Salario medio: %.2f\n", somaSalariosMasculino / numClientesMasculino);
    printf("Soma dos salarios: %.2f\n", somaSalariosMasculino);

    printf("FEMININO:\n");
    printf("Numero de clientes: %d\n", numClientesFeminino);
    printf("Idade media: %.2f\n", (float)somaIdadesFeminino / numClientesFeminino);
    printf("Salario medio: %.2f\n", somaSalariosFeminino / numClientesFeminino);
    printf("Soma dos salarios: %.2f\n", somaSalariosFeminino);
}

void relatorioPorSalario() {
    if (numClientes > 0) {
        float maiorSalario = clientes[0].salario;
        float menorSalario = clientes[0].salario;
        float somaSalarios = 0.0;
        int numClientesMenorSalarioMinimo = 0;

        for (i= 0; i < numClientes; ++i) {
            somaSalarios += clientes[i].salario;

            if (clientes[i].salario > maiorSalario) {
                maiorSalario = clientes[i].salario;
            }

            if (clientes[i].salario < menorSalario) {
                menorSalario = clientes[i].salario;
            }

            if (clientes[i].salario < 1320) {
                numClientesMenorSalarioMinimo++;
            }
        }

        printf("Relatorio por Salario:\n");
        printf("Cliente com maior salario: %.2f\n", maiorSalario);
        printf("Cliente com menor salario: %.2f\n", menorSalario);
        printf("Salario medio geral: %.2f\n", somaSalarios / numClientes);
        printf("Soma dos salarios: %.2f\n", somaSalarios);
        printf("Numero de clientes com salario menor que 1 salario minimo: %d\n", numClientesMenorSalarioMinimo);
    } else {
        printf("Nenhum cliente cadastrado. Relatorio por Salario nao disponivel.\n");
    }
}

void salvarEmBanco() {
    FILE *arquivo = fopen("clientes.txt", "w");

    if (arquivo != NULL) {
        fprintf(arquivo, "%d\n", numClientes);

        for (i= 0; i < numClientes; ++i) {
            fprintf(arquivo, "%s %s %s %d %c %.2f\n", clientes[i].cpf, clientes[i].rg, clientes[i].nome,
                    clientes[i].idade, clientes[i].sexo, clientes[i].salario);
        }

        fclose(arquivo);
        printf("Dados salvos em banco com sucesso!\n");
    } else {
        printf("Erro ao abrir o arquivo. Nao foi possivel salvar os dados.\n");
    }
}

void carregarDoBanco() {
    FILE *arquivo = fopen("clientes.txt", "r");

    if (arquivo != NULL) {
        fscanf(arquivo, "%d", &numClientes);

        for (i= 0; i < numClientes; ++i) {
            fscanf(arquivo, "%s %s %s %d %c %f", clientes[i].cpf, clientes[i].rg, clientes[i].nome,
                   &clientes[i].idade, &clientes[i].sexo, &clientes[i].salario);
        }

        fclose(arquivo);
        printf("Dados carregados do banco com sucesso!\n");
    } else {
        printf("Arquivo de dados nao encontrado. Nao foi possivel carregar os dados.\n");
    }
}

int main() {
    int opcao;

    do {
        printf("\nSISGESCLI - Sistema de Gestao de Clientes\n");
        printf("1. Inserir\n");
        printf("2. Alterar\n");
        printf("3. Excluir\n");
        printf("4. Pesquisar CPF\n");
        printf("5. Pesquisar NOME\n");
        printf("6. Imprimir TODOS\n");
        printf("7. Relatorio por GENERO\n");
        printf("8. Relatorio por SALARIO\n");
        printf("9. Salvar em Banco\n");
        printf("10. Ler do Banco\n");
        printf("20. Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirCliente();
                break;
            case 2:
                alterarCliente();
                break;
            case 3:
                excluirCliente();
                break;
            case 4:
                pesquisarClientePorCPF();
                break;
            case 5:
                pesquisarClientePorNome();
                break;
            case 6:
                imprimirTodosClientes();
                break;
            case 7:
                relatorioPorGenero();
                break;
            case 8:
                relatorioPorSalario();
                break;
            case 9:
                salvarEmBanco();
                break;
            case 10:
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

