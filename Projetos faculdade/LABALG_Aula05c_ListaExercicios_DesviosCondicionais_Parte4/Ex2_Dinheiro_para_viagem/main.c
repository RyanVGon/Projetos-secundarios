#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float cotDolar = 0, cotEuro = 0, cotLibra = 0;
	float qtdDolar = 0, qtdEuro = 0, qtdLibra = 0, qtdReais = 0;
	float dinheiroReais[4] = {0,0,0,0}, soma = 0;
	int menorQtdIndex = 0, maiorQtdIndex = 0;
	char nomes[4][20] = {"","","",""};
	
	printf("----------Viagem 4 amigos----------\n\n");
	
	printf("Digite a cotacao do Dolar: ");
	scanf("%f", &cotDolar);
	printf("Digite a cotacao do Euro: ");
	scanf("%f", &cotEuro);
	printf("Digite a cotacao da Libra: ");
	scanf("%f", &cotLibra);
	
	
	int i = 0;
	for(i=0;i<4;i++){
		printf("Digite o nome: ");
		scanf("%s", &nomes[i]);
		printf("Digite a quantia: ");
		scanf("%f", &dinheiroReais[i]);
	}
	
	menorQtdIndex = menorPorIndex(dinheiroReais, 4);
	maiorQtdIndex = maiorPorIndex(dinheiroReais, 4);
	
	printf("\n");
	for(i=0;i<4;i++){
		qtdReais = dinheiroReais[i];
		qtdDolar = qtdReais / cotDolar;
		qtdEuro = qtdReais / cotEuro;
		qtdLibra = qtdReais / cotLibra;
		printf("%s tem R$%.2f , convertidos tera %.2f dolares, %.2f euros e %.2f libras.\n", nomes[i], qtdReais, qtdDolar, qtdEuro, qtdLibra);
	}
	
	printf("\n");
	printf("Menor quantia foi de %s, com R$%.2f\n", nomes[menorQtdIndex], dinheiroReais[menorQtdIndex]);
	printf("Maior quantia foi de %s, com R$%.2f\n\n", nomes[maiorQtdIndex], dinheiroReais[maiorQtdIndex]);
	
	ordenar(dinheiroReais, 4);
	printf("Quantia em Reais ordenada: ");
	for(i=0;i<4;i++){
		printf("%.2f ", dinheiroReais[i]);
	}
	
	return 0;
}

void troca(float* xp, float* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  

void ordenar(float arr[], int n)
{
    int i, j, menorIndex;
    for (i = 0; i < n - 1; i++) {
        menorIndex = i;
        for (j = i + 1; j < n; j++){
        	if (arr[j] < arr[menorIndex]){
            	menorIndex = j;
			}
		}
        troca(&arr[menorIndex], &arr[i]);
    }
}

int menorPorIndex(float arr[], int n)
{
    int i, j, menorIndex = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++){
        	if (arr[j] < arr[menorIndex]){
            	menorIndex = j;
			}
		} 	
    }
    return menorIndex;
}

int maiorPorIndex(float arr[], int n)
{
    int i, j, maiorIndex = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++){
        	if (arr[j] > arr[maiorIndex]){
            	maiorIndex = j;
			}
		} 	
    }
    
    return maiorIndex;
}
