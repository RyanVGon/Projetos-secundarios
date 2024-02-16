#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero1 = 0, numero2 = 0, numero3 = 0;
	int maior = 0, menor = 0, intermediario = 0;
	
	printf("----------Ordenar 3 numeros----------\n\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &numero3);
	
	maior = maiorNum(numero1, numero2);
	maior = maiorNum(maior, numero3);
	
	menor = menorNum(numero1, numero2);
	menor = menorNum(menor, numero3);
	
	if(numero1 != numero2 && numero1 != numero3 && numero2 != numero3){
		if(maior > numero2 && numero2 > menor){
			intermediario = numero2;
		}else if(maior > numero1 && numero1 > menor){
			intermediario = numero1;
		}else if(maior > numero3 && numero3 > menor){
			intermediario = numero3;
		}
		
		printf("A ordem crescente ficou %d, %d, %d\n\n", menor, intermediario, maior);
	}else{
		printf("Nao e permitido valores repetidos\n\n");
	}
	
	
	
	system("pause");
	return 0;
}

int maiorNum(int a, int b){
	if(a > b){
		return a;
	}else{
		return b;
	}
}

int menorNum(int a, int b){
	if(a < b){
		return a;
	}else{
		return b;
	}
}
