#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	int numero1 = 0, numero2 = 0, numero3 = 0, numero4 = 0;
	
	//Entrada
	printf("----------Numeros divisiveis por 2 e 3----------\n\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &numero3);
	printf("Digite o quarto numero: ");
	scanf("%d", &numero4);
	
	//Saida e Processamento
	printf("\nNumeros divisiveis por 2 e 3: ");
	if((numero1 % 2 == 0) && (numero1 % 3 == 0)){
		printf("%d", numero1);
	}
	if((numero2 % 2 == 0) && (numero2 % 3 == 0)){
		printf(", %d", numero2);
	}
	if((numero3 % 2 == 0) && (numero3 % 3 == 0)){
		printf(", %d", numero3);
	}
	if((numero4 % 2 == 0) && (numero4 % 3 == 0)){
		printf(", %d", numero4);
	}
	
	
	printf("\n\n");
	system("pause");
	return 0;
}
