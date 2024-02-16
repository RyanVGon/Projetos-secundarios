#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	int anoAtual = 0, anoNascimento = 0, diasVividos = 0;
	
	//entrada
	printf("----------Calculadora de numero de dias vividos----------\n\n");
	printf("Digite o ano de nascimento: ");
	scanf("%i", &anoNascimento);
	printf("Digite o ano atual: ");
	scanf("%i", &anoAtual);
	
	//processamento
	diasVividos = (anoAtual - anoNascimento) * 365;
	
	//saida
	printf("Voce viveu: %i", diasVividos, " dias");
	printf("\n");
	
	system("pause");
	return 0;
}
