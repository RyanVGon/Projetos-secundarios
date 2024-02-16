#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int inicio = 1, fim = 20;
	double soma = 0, fator = 0;
	
	printf("----------soma fatorial dos impares de 0 a 20----------\n\n");
	
	int i = 0, j = 0;
	for(i = inicio;i <= fim;i += 2){
		fator = 1;
		for(j = i;j > 0;j--){
			fator *= i;
			//printf("fator: %.0f\n", fator);
		}
		
		soma += fator;
		//printf("soma: %.0f\n", soma);
	}
	
	printf("soma: %.0f\n", soma);
	
	printf("\n\n");
	system("pause");
	return 0;
}
