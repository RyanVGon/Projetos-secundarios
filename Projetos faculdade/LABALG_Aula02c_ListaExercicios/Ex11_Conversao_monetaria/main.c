#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	float valorReal = 0, cotaEuro = 0, cotaDolar = 0, valorEuro = 0, valorDolar = 0;
	
	//Entrada
	printf("----------Coversao monetaria----------\n\n");
	printf("Digite o valor em Reais: R$");
	scanf("%f", &valorReal);
	printf("Digite a cotacao do Dolar: $");
	scanf("%f", &cotaDolar);
	printf("Digite a cotacao do Euro: €");
	scanf("%f", &cotaEuro);
	
	//Processamento
	valorEuro = valorReal / cotaEuro;
	valorDolar = valorReal / cotaDolar;
	
	//Saida
	printf("\nR$%.2f", valorReal);
	printf("\n$%.2f", valorDolar);
	printf("\n€%.2f", valorEuro);
	printf("\n\n");
	
	system("pause");
	return 0;
}
