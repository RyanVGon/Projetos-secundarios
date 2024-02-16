#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int resultado = 0, inicio = 0, fim = 15;
	
	printf("----------Potencias de 3----------\n\n");
	
	int i = 0;
	for(i = inicio;i <= fim;i++){
		resultado = pow(3,i);
		printf("3^%d = %d\n", i, resultado);
	}
	
	
	
	printf("\n\n");
	system("pause");
	return 0;
}
