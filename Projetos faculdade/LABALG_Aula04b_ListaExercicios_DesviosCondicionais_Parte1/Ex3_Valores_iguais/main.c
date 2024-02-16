#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	float numero1 = 0, numero2 = 0;
	
	//Entrada
	printf("----------Teste numeros iguais----------\n\n");
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%f", &numero2);
	
	//Processamento e Saida
	if(numero1 == numero2){
		printf("\nOs numeros sao iguais");
	}else{
		printf("\nOs numeros sao diferentes");
	}
	printf("\n\n");
	
	system("pause");
	return 0;
}
