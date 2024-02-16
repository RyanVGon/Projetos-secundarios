#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	int numero = 0, calculo = 0;
	
	//Entrada
	printf("----------Par ou impar----------\n\n");
	printf("Digite o numero a ser testado: ");
	scanf("%d", &numero);
	
	//Processamento
	calculo = numero % 2;
	
	//Saida
	if(calculo){
		printf("O numero e impar");
	}else{
		printf("O numero e par");
	}
	printf("\n\n");
	
	system("pause");
	return 0;
}
