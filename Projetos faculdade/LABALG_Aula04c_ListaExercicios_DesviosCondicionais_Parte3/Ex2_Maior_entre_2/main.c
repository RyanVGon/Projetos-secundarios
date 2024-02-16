#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero1 = 0, numero2 = 0, maior, menor;
	
	printf("----------Maior entre 2 numeros----------\n\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	
	if(numero1 != numero2){
		if(numero1 > numero2){
			maior = numero1;
			menor = numero2;
		}else{
			maior = numero2;
			menor = numero1;
		}
		
		printf("O maior numero e: %d\n", maior);
		printf("O menor numero e: %d\n\n", menor);
	}else{
		printf("Nao e permitido numeros repetido\n\n");
	}
	
	
	
	system("pause");
	return 0;
}
