#include <stdio.h>
#include <string.h>

#define MAX_VEICULOS 5

typedef struct {
    char placa[10];
    char marca[20];
    char modelo[20];
    float valorEstacionamento;
    char telefoneProprietario[15];
} Veiculo;

int i;
float total = 0;
Veiculo estacionamento[MAX_VEICULOS];

int buscarVeiculoPorPlaca(const char *placa) {
    for (i = 0; i < MAX_VEICULOS; ++i) {
        if (strcmp(estacionamento[i].placa, placa) == 0) {
            return i; // Retorna o índice do veículo encontrado
        }
    }
    return -1; // Retorna -1 se o veículo não for encontrado
}

int buscarPosicaoVazia() {
    for (i = 0; i < MAX_VEICULOS; ++i) {
        if (estacionamento[i].placa[0] == '\0') {
            return i; // Retorna o índice da posição vazia
        }
    }
    return -1; // Retorna -1 se não houver posição vazia
}

void registrarEntrada() {
    int posicaoVazia = buscarPosicaoVazia();

    if (posicaoVazia != -1) {
        printf("Informe os dados do veiculo:\n");
        printf("Placa: ");
        scanf("%s", estacionamento[posicaoVazia].placa);
        printf("Marca: ");
        scanf("%s", estacionamento[posicaoVazia].marca);
        printf("Modelo: ");
        scanf("%s", estacionamento[posicaoVazia].modelo);
        printf("Valor Estacionamento: ");
        scanf("%f", &estacionamento[posicaoVazia].valorEstacionamento);
        printf("Telefone Proprietario: ");
        scanf("%s", estacionamento[posicaoVazia].telefoneProprietario);
		
		total += estacionamento[posicaoVazia].valorEstacionamento;
        printf("Veiculo registrado com sucesso!\n");
    } else {
        printf("O estacionamento esta lotado. Nao e possivel registrar mais veiculos.\n");
    }
}

void registrarSaida() {
    char placa[10];
    printf("Informe a placa do veiculo que deseja registrar a saida: ");
    scanf("%s", placa);

    int indiceVeiculo = buscarVeiculoPorPlaca(placa);

    if (indiceVeiculo != -1) {
        estacionamento[indiceVeiculo].placa[0] = '\0'; // Libera a posição do veículo
        printf("Saida registrada com sucesso!\n");
    } else {
        printf("Veiculo nao encontrado. Saida nao registrada.\n");
    }
}

void localizarVeiculo() {
    char placa[10];
    printf("Informe a placa do veiculo que deseja localizar: ");
    scanf("%s", placa);

    int indiceVeiculo = buscarVeiculoPorPlaca(placa);

    if (indiceVeiculo != -1) {
        printf("Veiculo encontrado!\n");
        printf("Placa: %s\n", estacionamento[indiceVeiculo].placa);
        printf("Marca: %s\n", estacionamento[indiceVeiculo].marca);
        printf("Modelo: %s\n", estacionamento[indiceVeiculo].modelo);
        printf("Valor Estacionamento: %.2f\n", estacionamento[indiceVeiculo].valorEstacionamento);
        printf("Telefone Proprietario: %s\n", estacionamento[indiceVeiculo].telefoneProprietario);
    } else {
        printf("Veiculo nao encontrado.\n");
    }
}

void relatorioVeiculos() {
    printf("Relatorio de Veiculos:\n");
    printf("Placa      | Marca          | Modelo         | Valor Estacionamento | Telefone Proprietario\n");
    printf("-----------|----------------|----------------|----------------------|----------------------\n");

    for (i = 0; i < MAX_VEICULOS; ++i) {
        if (estacionamento[i].placa[0] != '\0') {
            printf("%-11s| %-15s| %-15s| %-21.2f| %-21s\n",
                   estacionamento[i].placa,
                   estacionamento[i].marca,
                   estacionamento[i].modelo,
                   estacionamento[i].valorEstacionamento,
                   estacionamento[i].telefoneProprietario);
        }
    }
}

void saldoCaixa() {
    printf("Saldo total acumulado: %.2f\n", total);
}

int main() {
    int opcao;

    do {
        printf("\nSYSCAR - Sistema de Estacionamento\n");
        printf("1. Registrar Entrada\n");
        printf("2. Registrar Saida\n");
        printf("3. Localizar Veiculo\n");
        printf("4. Relatorio de Veiculos\n");
        printf("5. Saldo Caixa\n");
        printf("0. Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                registrarEntrada();
                break;
            case 2:
                registrarSaida();
                break;
            case 3:
                localizarVeiculo();
                break;
            case 4:
                relatorioVeiculos();
                break;
            case 5:
                saldoCaixa();
                break;
            case 0:
                printf("Saindo do sistema.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
