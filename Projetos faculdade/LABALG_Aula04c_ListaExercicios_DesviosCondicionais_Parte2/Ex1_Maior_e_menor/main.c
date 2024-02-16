#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero1 = 0, numero2 = 0, numero3 = 0, numero4 = 0, numero5 = 0, maior = 0, menor = 0;
	
	printf("----------Maior e menor----------\n\n");
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
	
	maior = maiorNumero(numero1, numero2);
	maior = maiorNumero(maior, numero3);
	maior = maiorNumero(maior, numero4);
	maior = maiorNumero(maior, numero5);
	
	menor = menorNumero(numero1, numero2);
	menor = menorNumero(menor, numero3);
	menor = menorNumero(menor, numero4);
	menor = menorNumero(menor, numero5);
	
	printf("\nMaior numero: %d\n", maior);
	printf("Menor numero: %d\n\n", menor);
	
	system("pause");
	return 0;
}


int maiorNumero(int a , int b){
	if(a > b){
		return a;
	}else{
		return b;
	}
}

int menorNumero(int a , int b){
	if(a < b){
		return a;
	}else{
		return b;
	}
}

