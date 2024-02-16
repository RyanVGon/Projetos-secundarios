#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int soma = 0, numero1 = 0, numero2 = 0, numero3 = 0, numero4 = 0, numero5 = 0;
	
	printf("----------Soma do fatorial de 5 numeros----------\n\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &numero3);
	printf("Digite o quarto numero: ");
	scanf("%d", &numero4);
	printf("Digite o quinto numero: ");
	scanf("%d", &numero5);
	
	numero1 = fatorial(numero1);
	numero2 = fatorial(numero2);
	numero3 = fatorial(numero3);
	numero4 = fatorial(numero4);
	numero5 = fatorial(numero5);
	
	soma = numero1 + numero2 + numero3 + numero4 + numero5;
	
	printf("A soma do fatorial dos 5 valores e: %d", soma);
	
	printf("\n\n");
	system("pause");
	return 0;
}

int fatorial(int fator){
	int i = 0, resultado = 1;
	for(i = fator;i > 0;i--){
		resultado *= i;
	}
	
	return resultado;
}
