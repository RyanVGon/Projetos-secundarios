#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	float conta1 = 0, conta2 = 0, conta3 = 0;
	float total = 0;
	char acrescimo = 'S';
		
	//Entrada
	printf("----------Taxa garcom----------\n\n");
	printf("Digite o valor da primeira conta: ");
	scanf("%f", &conta1);
	printf("Digite o valor da segunda conta: ");
	scanf("%f", &conta2);
	printf("Digite o valor da terceira conta: ");
	scanf("%f", &conta3);
	printf("Pode ser acrescido os valores de atendimento?\n");
	printf("(S) ou (N)\n");
	scanf(" %c", &acrescimo);
	
	//Processamento
	total = conta1 + conta2 + conta3;
	if(tolower(acrescimo) == 's'){
		total += total * 0.10;
	}
	
	//Saida
	printf("\nO total foi de: R$%.2f", total);
	
	printf("\n\n");
	system("pause");
	return 0;
}
