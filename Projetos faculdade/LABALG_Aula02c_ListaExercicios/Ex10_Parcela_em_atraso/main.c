#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	float parcelaInicial = 0, parcelaAtrasada = 0, juros = 0;
	
	//Entrada
	printf("----------Calculadora de parcela atrasada----------\n\n");
	printf("Digite o valor inicial da parcela: ");
	scanf("%f", &parcelaInicial);
	printf("Digite o juros(porcentagem): ");
	scanf("%f", &juros);
	
	//Processamento
	//deixar mais simples a leitura da parcela atrasada
	juros = juros / 100;
	
	parcelaAtrasada = parcelaInicial + parcelaInicial * juros;
	
	//Saida
	printf("O valor da parcela em atraso e de R$%.2f", parcelaAtrasada);
	printf("\n\n");
	
	system("pause");
	return 0;
}
