#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	float numero = 0;
	
	//Entrada
	printf("----------Modulo de um numero----------\n\n");
	printf("Digite o numero: ");
	scanf("%f", &numero);
	
	//Processamento
	if(numero < 0){
		numero *= -1;
	}
	
	//Saida
	printf("\nO numero final e: %g", numero);
	
	printf("\n\n");
	system("pause");
	return 0;
}
