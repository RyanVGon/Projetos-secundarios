#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int resultado = 1, fator = 0;
	
	printf("----------Fatorial de N----------\n\n");
	printf("Digite o valor a ser calculado: ");
	scanf("%d", &fator);
	
	int i = 0;
	for(i = fator;i > 0;i--){
		resultado *= i;
	}
	
	printf("%d! = %d", fator, resultado);
	
	printf("\n\n");
	system("pause");
	return 0;
}
