#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	float transporte = 0, comida = 0, mensalidade = 0, totalmensal = 0, totalanual = 0, diasPorSemana = 0;
	
	//entrada
	printf("----------Calculo de despesas da faculdade----------\n\n");
	printf("Quantos dias da semana voce tem aula: ");
	scanf("%f", &diasPorSemana);
	printf("Qual o gasto de transporte para a faculdade por dia: ");
	scanf("%f", &transporte);
	printf("Qual o gasto de comida na faculdade por dia: ");
	scanf("%", &comida);
	printf("Qual o valor da mensalidade: ");
	scanf("%f", &mensalidade);
	
	//processamento
	totalmensal = diasPorSemana * 4 * (transporte + comida) + mensalidade;
	totalanual = totalmensal * 12;
	
	//saida
	printf("\nGasto mensal de: R$%.2f", totalmensal);
	printf("\nGasto anual de: R$%.2f", totalanual);
	printf("\n");
	
	system("pause");
	return 0;
}
